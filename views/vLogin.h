#ifndef VIEW_LOGIN_H
#define VIEW_LOGIN_H

#include <maapi.h>
#include <MAUtil/util.h>
#include <NativeUI/Widgets.h>
#include <MAHeaders.h>

namespace Manager
{
	class Login;
}

namespace View
{
	class Login : public NativeUI::Screen, public NativeUI::ButtonListener, public NativeUI::EditBoxListener
	{
		private:
			Manager::Login* manager;

			NativeUI::VerticalLayout* mMainLayout;
			NativeUI::Image* mLogo;
			NativeUI::Image* mSeparator;
			NativeUI::Label* mInstructions;
			NativeUI::Label* mStatus;
			NativeUI::EditBox* mMailBox;
			NativeUI::EditBox* mPasswordBox;
			NativeUI::Button* mSubmitButton;
			NativeUI::Button* mRegisterButton;

			static const unsigned int mMainLayoutBgColor;
			static const unsigned int mLogoWidth;
			static const unsigned int mLogoHeight;
			static const char* mInstructionsText;
			static const unsigned int mInstructionsFontColor;
			static const char* mStatusText;
			static const unsigned int mStatusFontColor;
			static const char* mMailBoxPlaceholder;
			static const char* mPasswordBoxPlaceholder;
			static const char* mSubmitButtonLabel;
			static const char* mSubmitButtonErrorMissingMail;
			static const char* mSubmitButtonErrorMissingPwd;
			static const char* mRegisterButtonLabel;

			void createUI();

			virtual void buttonClicked(NativeUI::Widget* button);
			virtual void editBoxReturn(NativeUI::EditBox* editBox);

		public:
			Login(Manager::Login* manager);
			~Login();

			void callbackAuthentication();
			void callbackClients();
	};
}

#endif
