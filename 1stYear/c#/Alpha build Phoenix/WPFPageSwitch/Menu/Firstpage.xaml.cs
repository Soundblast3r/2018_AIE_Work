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
	public partial class Firstpage : UserControl, ISwitchable
	{

        //LoginWindowForm loginForm;
        //RegisterForm registerForm;

        public Firstpage()
        {

            InitializeComponent();
        }

		private void PhoenixMainPageButton_Click(object sender, System.Windows.RoutedEventArgs e)
		{
			Switcher.Switch(new PhoenixMainPage());
		}

        //private void ShowMessageBox(string title, string message, MessageBoxIcon icon)
        //{
            //MessageBoxChildWindow messageWindow =
            //    new MessageBoxChildWindow(title, message, MessageBoxButtons.Ok, icon);

            //messageWindow.Show();
        //}

        #region ISwitchable Members
        public void UtilizeState(object state)
        {
            throw new NotImplementedException();
        }
        #endregion


        private void DeclineButton_Click(object sender, EventArgs e)
        {
            Application.Current.Shutdown();
        }
    }
}