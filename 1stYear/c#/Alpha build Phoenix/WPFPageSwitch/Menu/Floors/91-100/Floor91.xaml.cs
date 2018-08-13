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
	public partial class Floor91 : UserControl, ISwitchable
	{
		public Floor91()
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

        private void AchivedNewsletters_Button_Click(object sender, RoutedEventArgs e)
        {
            Switcher.Switch(new NewsArchive());
        }
    }
}