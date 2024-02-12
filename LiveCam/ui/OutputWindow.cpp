#include "OutputWindow.h"

bool OutputWindow::event(QEvent * e) // overloading event(QEvent*) method of QMainWindow 
{
switch (e->type())
{
case QEvent::WindowActivate:
	if (!liveCamWindow->ui.btn_startEffectLeft_Container->isEnabled())
	{
		liveCamWindow->editorWindow->raise();
	}
	break;
};
return QMainWindow::event(e);
}

OutputWindow::OutputWindow(LiveCamWindow* liveCamWindow, QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->liveCamWindow = liveCamWindow;

	ui.mainToolBar->hide();
	ui.menuBar->hide();
	ui.statusBar->hide();

	this->layout()->setContentsMargins(0, 0, 0, 0);
	this->layout()->setSpacing(0);
	centralWidget()->layout()->setContentsMargins(0, 0, 0, 0); 
	centralWidget()->layout()->setSpacing(0);
}

OutputWindow::~OutputWindow()
{
}

void OutputWindow::setWidget(CVImageWidgetOrg* widget){
	imageWidget = widget;
	QVBoxLayout *vbox = new QVBoxLayout();
	vbox->addWidget(imageWidget, 0, Qt::AlignCenter);
	vbox->setContentsMargins(0, 0, 0, 0);
	vbox->setSpacing(0);
	ui.outputFrame->setLayout(vbox);
}

void OutputWindow::on_actionFull_Screen_triggered(){
}

void OutputWindow::keyPressEvent(QKeyEvent *event) // definition
{
	if (event->type() == QEvent::KeyPress) {
		QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);

		int keyInt = keyEvent->key();
		Qt::Key key = static_cast<Qt::Key>(keyInt);
		if (key == Qt::Key_unknown) {
			qDebug() << "Unknown key from a macro probably";
			return;
		}
		// the user have clicked just and only the special keys Ctrl, Shift, Alt, Meta. 
		if (key == Qt::Key_Control ||
			key == Qt::Key_Shift ||
			key == Qt::Key_Alt ||
			key == Qt::Key_Meta)
		{
			qDebug() << "Single click of special key: Ctrl, Shift, Alt or Meta";
			qDebug() << "New KeySequence:" << QKeySequence(keyInt).toString(QKeySequence::NativeText);
			return;
		}

		// check for a combination of user clicks 
		Qt::KeyboardModifiers modifiers = keyEvent->modifiers();
		QString keyText = keyEvent->text();
		// if the keyText is empty than it's a special key like F1, F5, ... 
		qDebug() << "Pressed Key:" << keyText << keyInt;

		QList<Qt::Key> modifiersList;
		if (modifiers & Qt::ShiftModifier)
			keyInt += Qt::SHIFT;
		if (modifiers & Qt::ControlModifier)
			keyInt += Qt::CTRL;
		if (modifiers & Qt::AltModifier)
			keyInt += Qt::ALT;
		if (modifiers & Qt::MetaModifier)
			keyInt += Qt::META;

		qDebug() << "New KeySequence:" << QKeySequence(keyInt).toString(QKeySequence::NativeText);

		if (QKeySequence(keyInt).toString(QKeySequence::NativeText) == "Alt+Return") {
			if (!isFullScreen) {
				this->setWindowState(Qt::WindowFullScreen);
				isFullScreen = true;
			}
			else if (isFullScreen) {
				this->setWindowState(Qt::WindowMaximized);
				isFullScreen = false;
			}
			return;
		}

		if (keyInt == Qt::Key_F) {
			this->setWindowState(Qt::WindowFullScreen);
			isFullScreen = true;
			return;
		}

		if (keyInt == Qt::Key_Escape) {
			this->setWindowState(Qt::WindowMaximized);
			isFullScreen = false;
			return;
		}

		QMainWindow::keyPressEvent(event);
		return;
	}
}