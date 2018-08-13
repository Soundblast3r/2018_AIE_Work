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
	public partial class Floor4Info : UserControl, ISwitchable
	{
		public Floor4Info()
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

        private void FloorProgression4(object sender, RoutedEventArgs e)
        {
            Switcher.Switch(new Floor4());
        }

        private void Map_Floor4(object sender, RoutedEventArgs e)
        {
            Menu.Maps.Floor4Map Map_Floor2 = new Menu.Maps.Floor4Map();
            Map_Floor2.Show();
        }
    }
}