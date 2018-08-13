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
	public partial class Floor2Info : UserControl, ISwitchable
	{
		public Floor2Info()
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
            Switcher.Switch(new Floor2());
        }

        private void Map_Floor2(object sender, RoutedEventArgs e)
        {
            Menu.Maps.Floor2Map Map_Floor2 = new Menu.Maps.Floor2Map();
            Map_Floor2.Show();
        }
    }
}