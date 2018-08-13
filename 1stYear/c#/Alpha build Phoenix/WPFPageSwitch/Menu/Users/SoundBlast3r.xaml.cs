using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;
using ThePhoenix.Menu.Users;

namespace ThePhoenix
{
    
	public partial class SoundBlast3r : UserControl, ISwitchable
	{
		public SoundBlast3r()
		{
			// Required to initialize variables
			InitializeComponent();
		}

        #region ISwitchable Members
        public void UtilizeState(object state)
        {
            throw new NotImplementedException();
        }
        #endregion
        private void Button_Click(object sender, RoutedEventArgs e)
        {
            Switcher.Switch(new PhoenixMainPage());
        }
        private void Button_Click1(object sender, RoutedEventArgs e)
        {
            //EditControl.UserName = "SoundBlast3r";
            Switcher.Switch(new PhoenixMainPage());
        }

        private void EditMainPageButton_Click(object sender, RoutedEventArgs e)
        {

        }

        private void SetTaskButton_Click1(object sender, RoutedEventArgs e)
        {
            AdminTaskSet TaskSetWin = new AdminTaskSet();
            TaskSetWin.Show();
        }
        private void SaveButton_Click(object sender, RoutedEventArgs e)
        {
            //save and update current document.
        }
    }
}