using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;
using ThePhoenix.Menu;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Tab;

namespace ThePhoenix
{
    public partial class PhoenixMainPage : UserControl, ISwitchable
    {
        public PhoenixMainPage()
        {
            InitializeComponent();
        }

        //public void Edit()
        //{
        //    EditControl Edit = new EditControl();
        //    if (EditControl.UserName"SoundBlast3r")
        //    {
        //        EditMode (true);
        //    }
        //}

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

        private void Teambutton_Click(object sender, System.Windows.RoutedEventArgs e)
        {
            Switcher.Switch(new TeamSelect());
        }

        private void MapUpdatebutton_Click(object sender, System.Windows.RoutedEventArgs e)
        {
            Switcher.Switch(new MapUpdate());
        }

        public void AboutButton_Click(object sender, System.Windows.RoutedEventArgs e)
        {
            AboutBox AboutWin = new AboutBox();
            AboutWin.Show();
        }

        public void NewsletterButton_Click(object sender, System.Windows.RoutedEventArgs e)
        {
            Switcher.Switch(new NewsletterSelection());
        }

        private void Projectbutton_Click(object sender, RoutedEventArgs e)
        {
            Switcher.Switch(new Projects());
        }
        //Region for floors
        // Floors 1-10
        //Floor 1
        private void Floor_1_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor1());
                    }
                //Floor 2
                    private void Floor_2_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor2());
                    }
                //Floor 3
                    private void Floor_3_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor3());
                    }
                //Floor 4
                    private void Floor_4_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor4());
                    }
                //Floor 5
                    private void Floor_5_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor5());
                    }
                //Floor 6
                    private void Floor_6_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor6());
                    }
                //Floor 7
                    private void Floor_7_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor7());
                    }
                //Floor 8
                    private void Floor_8_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor8());
                    }
                //Floor 9
                    private void Floor_9_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor9());
                    }
                //Floor 10
                    private void Floor_10_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor10());
                    }
            // Floors 11-20
                //Floor 11
                    private void Floor_11_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor11());
                    }
                //Floor 12
                    private void Floor_12_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor12());
                    }
                //Floor 13
                    private void Floor_13_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor13());
                    }
                //Floor 14
                    private void Floor_14_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor14());
                    }
                //Floor 15
                    private void Floor_15_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor15());
                    }
                //Floor 16
                    private void Floor_16_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor16());
                    }
                //Floor 17
                    private void Floor_17_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor17());
                    }
                //Floor 18
                    private void Floor_18_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor18());
                    }
                //Floor 19
                    private void Floor_19_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor19());
                    }
                //Floor 20
                    private void Floor_20_Button(object sender, RoutedEventArgs e)
                    {
                        Switcher.Switch(new Floor20());
                    }
        // Floors 21-30
            //Floor 21
                private void Floor_21_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor21());
                }
            //Floor 22
                private void Floor_22_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor22());
                }
            //Floor 23
                private void Floor_23_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor23());
                }
            //Floor 24
                private void Floor_24_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor24());
                }
            //Floor 25
                private void Floor_25_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor25());
                }
            //Floor 26
                private void Floor_26_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor26());
                }
            //Floor 27
                private void Floor_27_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor27());
                }
            //Floor 28
                private void Floor_28_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor28());
                }
            //Floor 29
                private void Floor_29_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor29());
                }
            //Floor 30
                private void Floor_30_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor30());
                }
        // Floors 31-40
            //Floor 31
                private void Floor_31_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor31());
                }
            //Floor 32
                private void Floor_32_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor32());
                }
            //Floor 33
                private void Floor_33_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor33());
                }
            //Floor 34
                private void Floor_34_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor34());
                }
            //Floor 35
                private void Floor_35_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor35());
                }
            //Floor 36
                private void Floor_36_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor36());
                }
            //Floor 37
                private void Floor_37_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor37());
                }
            //Floor 38
                private void Floor_38_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor38());
                }
            //Floor 39
                private void Floor_39_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor39());
                }
            //Floor 40
                private void Floor_40_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor40());
                }

        // Floors 41-50
            //Floor 41
                private void Floor_41_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor41());
                }
            //Floor 42
                private void Floor_42_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor42());
                }
            //Floor 43
                private void Floor_43_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor43());
                }
            //Floor 44
                private void Floor_44_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor44());
                }
            //Floor 45
                private void Floor_45_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor45());
                }
            //Floor 46
                private void Floor_46_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor46());
                }
            //Floor 47
                private void Floor_47_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor47());
                }
            //Floor 48
                private void Floor_48_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor48());
                }
            //Floor 49
                private void Floor_49_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor49());
                }
            //Floor 50
                private void Floor_50_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor50());
                }
        // Floors 51-60
            //Floor 51
                private void Floor_51_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor51());
                }
            //Floor 52
                private void Floor_52_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor52());
                }
            //Floor 53
                private void Floor_53_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor53());
                }
            //Floor 54
                private void Floor_54_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor54());
                }
            //Floor 55
                private void Floor_55_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor55());
                }
            //Floor 56
                private void Floor_56_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor56());
                }
            //Floor 57
                private void Floor_57_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor57());
                }
            //Floor 58
                private void Floor_58_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor58());
                }
            //Floor 59
                private void Floor_59_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor59());
                }
            //Floor 60
                private void Floor_60_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor60());
                }
        // Floors 61-70
            //Floor 61
                private void Floor_61_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor61());
                }
            //Floor 62
                private void Floor_62_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor62());
                }
            //Floor 63
                private void Floor_63_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor63());
                }
            //Floor 64
                private void Floor_64_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor64());
                }
            //Floor 65
                private void Floor_65_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor65());
                }
            //Floor 66
                private void Floor_66_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor66());
                }
            //Floor 67
                private void Floor_67_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor67());
                }
            //Floor 68
                private void Floor_68_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor68());
                }
            //Floor 69
                private void Floor_69_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor69());
                }
            //Floor 70
                private void Floor_70_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor70());
                }
        // Floors 71-80
            //Floor 71
                private void Floor_71_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor71());
                }
            //Floor 72
                private void Floor_72_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor72());
                }
            //Floor 73
                private void Floor_73_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor73());
                }
            //Floor 74
                private void Floor_74_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor74());
                }
            //Floor 75
                private void Floor_75_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor75());
                }
            //Floor 76
                private void Floor_76_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor76());
                }
            //Floor 77
                private void Floor_77_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor77());
                }
            //Floor 78
                private void Floor_78_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor78());
                }
            //Floor 79
                private void Floor_79_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor79());
                }
            //Floor 80
                private void Floor_80_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor80());
                }
        // Floors 81-90
            //Floor 81
                private void Floor_81_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor81());
                }
            //Floor 82
                private void Floor_82_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor82());
                }
            //Floor 83
                private void Floor_83_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor83());
                }
            //Floor 84
                private void Floor_84_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor84());
                }
            //Floor 85
                private void Floor_85_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor85());
                }
            //Floor 86
                private void Floor_86_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor86());
                }
            //Floor 87
                private void Floor_87_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor87());
                }
            //Floor 88
                private void Floor_88_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor88());
                }
            //Floor 89
                private void Floor_89_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor89());
                }
            //Floor 90
                private void Floor_90_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor90());
                }
        // Floors 91-100
            //Floor 91
                private void Floor_91_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor91());
                }
            //Floor 92
                private void Floor_92_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor92());
                }
            //Floor 93
                private void Floor_93_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor93());
                }
            //Floor 94
                private void Floor_94_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor94());
                }
            //Floor 95
                private void Floor_95_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor95());
                }
            //Floor 96
                private void Floor_96_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor96());
                }
            //Floor 97
                private void Floor_97_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor97());
                }
            //Floor 98
                private void Floor_98_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor98());
                }
            //Floor 99
                private void Floor_99_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor99());
                }
            //Floor 100
                private void Floor_100_Button(object sender, RoutedEventArgs e)
                {
                    Switcher.Switch(new Floor100());
                }

        
    }
}