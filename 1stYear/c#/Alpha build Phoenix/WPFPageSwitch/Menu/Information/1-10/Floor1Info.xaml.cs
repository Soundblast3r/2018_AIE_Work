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
	public partial class Floor1Info : UserControl, ISwitchable
	{
		public Floor1Info()
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

        private void Button_Click_2(object sender, RoutedEventArgs e)
        {
            Switcher.Switch(new Floor1());
        }
        private void Map_Floor1(object sender, RoutedEventArgs e)
        {
            Menu.Maps.Floor1Map Map_Floor1 = new Menu.Maps.Floor1Map();
            Map_Floor1.Show();
        }

        private void loginButton_Click_1(object sender, RoutedEventArgs e)
        {
            Walkthrough_popup.Width = 0;
            Walkthrough_popup.Height = 0;

            textbox.Width = 0;
            textbox.Height = 0;

            loginButton.Width = 0;
            loginButton.Height = 0;
        }
    }
}