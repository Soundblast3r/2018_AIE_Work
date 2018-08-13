using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;

namespace ThePhoenix
{
	public partial class Floor5 : UserControl, ISwitchable
	{
		public Floor5()
		{
			// Required to initialize variables
			InitializeComponent();
		}

        #region ISwitchable Members
        public void UtilizeState(object state)
        {
            throw new NotImplementedException();
        }

        private void Button_Click(object sender, System.Windows.RoutedEventArgs e)
        {
        	Switcher.Switch(new PhoenixMainPage());
        }

        #endregion
        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            Switcher.Switch(new PhoenixMainPage());
        }

        private void loginButton_Click_1(object sender, RoutedEventArgs e)
        {
            if (usernameTextBox.Text.Equals("SoundBlast3r") && PasswordTextBox.Password.Equals("h7d148cfo6") || usernameTextBox.Text.Equals("CubicCrazy") && PasswordTextBox.Password.Equals("Sightless"))
            {
                Restricted_floor_5.Width = 0;
                Restricted_floor_5.Height = 0;

                usernameTextBlock.Width = 0;
                usernameTextBlock.Height = 0;

                usernameTextBox.Width = 0;
                usernameTextBox.Height = 0;

                PasswordTextBlock.Width = 0;
                PasswordTextBlock.Height = 0;

                PasswordTextBox.Width = 0;
                PasswordTextBox.Height = 0;

                box.Width = 0;
                box.Height = 0;

                textbox.Width = 0;
                textbox.Height = 0;

                loginButton.Width = 0;
                loginButton.Height = 0;

                Warning.Width = 0;
                Warning.Height = 0;

                WarningLabel.Width = 0;
                WarningLabel.Height = 0;
            }
            else
            {
                Warning.Width = 347;
                Warning.Height = 180;

                WarningLabel.Width = 238;
                WarningLabel.Height = 45;
            }
        }
    }
}