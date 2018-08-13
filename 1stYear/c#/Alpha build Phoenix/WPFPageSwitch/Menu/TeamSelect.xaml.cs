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
	public partial class TeamSelect : UserControl, ISwitchable
	{
		public TeamSelect()
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

        private void loginButton_Click(object sender, RoutedEventArgs e)
        {
            if (!usernameTextBox.Text.Equals("") && !PasswordBox.Password.Equals(""))
            {
                if (usernameTextBox.Text.Equals("SoundBlast3r") && PasswordBox.Password.Equals("h7d148cfo6"))
                {
                    Switcher.Switch(new SoundBlast3r());
                }
                else if (usernameTextBox.Text.Equals("1") && PasswordBox.Password.Equals("1"))
                {
                    Switcher.Switch(new CubicCrazy());
                }

                else if (usernameTextBox.Text.Equals("TheWither_Effect") && PasswordBox.Password.Equals("002"))
                {
                    Switcher.Switch(new Pyro());
                }

                else if (usernameTextBox.Text.Equals("Lorigami") && PasswordBox.Password.Equals("006") || (usernameTextBox.Text.Equals("_psychopath_") && PasswordBox.Password.Equals("006")))
                {
                    Switcher.Switch(new Lorigami());
                }
                else if (usernameTextBox.Text.Equals("Dragoonaphant") && PasswordBox.Password.Equals("004") || (usernameTextBox.Text.Equals("skribbleMonkey") && PasswordBox.Password.Equals("004")))
                {
                    Switcher.Switch(new Sketch());
                }
                else
                    System.Windows.Forms.MessageBox.Show("your Username does not match any known accounts, please check your details and try again");
            }
            else
                System.Windows.Forms.MessageBox.Show("your username and password combination do not match any known accouts <br> please check your deatils and try again");
        }

        private void usernameTextBox_TextChanged(object sender, TextChangedEventArgs e)
        {

        }
    }
}