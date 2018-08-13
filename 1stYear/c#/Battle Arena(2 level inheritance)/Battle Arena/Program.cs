using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Battle_Arena
{
    public class unit
    {
        public String name;
        public int Health;
        public int Defence;
        public bool isAlive;

        public void Print()
        {
            Console.WriteLine("Grunt Exists.");
        }

        public void HealthUpdate()
        {

            if (Health <= 0)
            {
                Health = 0;
                isAlive = false;
            }
            Console.WriteLine("Current Health is: " + Health);
            Console.WriteLine("Current Defence is: " + Defence);
            Console.WriteLine("is Alive: " + isAlive);
        }
    }

    class friendly : unit
    {
        public int Attack;
        

        public void FriendStat()
        {
            Console.WriteLine(name + " is friendly.");
            Console.WriteLine(name + "'s Health is: " + Health);
            Console.WriteLine(name + "'s Attack is: " + Attack);
            Console.WriteLine(name + "'s Defence is: " + Defence);
        }

        public void HostileAttack(friendly self, hostile Target)
        {
            Target.Health = Target.Health - self.Attack - Target.Defence;
            Target.Defence = Target.Defence - 1;
        }
        public void BruteAttack(friendly self, Brute Target)
        {
            Target.Health = self.Attack / 2 - Target.Defence;
            Target.Defence = Target.Defence - 1;
        }

    }

    class Captain : friendly
    {
        public int SpecAttack;
        public int SpecDefence;

        public void CaptainStat()
        {
            Console.WriteLine("Is a Captain.");
            Console.WriteLine(name + "'s Health is: " + Health);
            Console.WriteLine(name + "'s Attack is: " + Attack);
            Console.WriteLine(name + "'s Defence is: " + Defence);
            Console.WriteLine(name + "'s Special Attack is: " + SpecAttack);
            Console.WriteLine(name + "'s Special Defence is: " + SpecDefence);

        }

        public void HostileSpecialAttack(Captain self, hostile Target)
        {
            Target.Health = Target.Health - self.SpecAttack * 2  - Target.Defence;
            Target.Defence = Target.Defence - 1;
        }
        public void BruteSpecialAttack(Captain self, Brute Target)
        {
            Target.Health = self.SpecAttack - Target.SpecDefence;
            Target.SpecDefence = Target.SpecDefence - 1;
        }
    }

    class hostile : unit
    {
        public int Attack;

        public void HostileStat()
        {
            Console.WriteLine("Is Hostile.");
            Console.WriteLine(name + "'s Health is: " + Health);
            Console.WriteLine(name + "'s Attack is: " + Attack);
            Console.WriteLine(name + "'s Defence is: " + Defence);
        }

        public void SoldierAttack(hostile self, friendly Target)
        {
            Target.Health = Target.Health - self.Attack - Target.Defence;
            Target.Defence = Target.Defence - 1;
        }
        public void CaptianAttack(hostile self, Captain Target)
        {
            Target.Health = self.Attack / 2 - Target.Defence;
            Target.Defence = Target.Defence - 1;
        }
    }

    class Brute : hostile
    {
        public int SpecAttack;
        public int SpecDefence;

        public void HostileBoss()
        {
            Console.WriteLine("Species Detected: " + name);
            Console.WriteLine("Is a Boss.");
            Console.WriteLine(name + "'s Health is: " + Health);
            Console.WriteLine(name + "'s Attack is: " + Attack);
            Console.WriteLine(name + "'s Defence is: " + Defence);
            Console.WriteLine(name + "'s Special Attack is: " + SpecAttack);
            Console.WriteLine(name + "'s Special Defence is: " + SpecDefence);
        }

        public void HostileSpecialAttack(Brute self, friendly Target)
        {
            Target.Health = Target.Health - self.SpecAttack * 2 - Target.Defence;
            Target.Defence = Target.Defence - 1;
        }
        public void CaptainSpecialAttack(Brute self, Captain Target)
        {
            Target.Health = self.SpecAttack - Target.SpecDefence;
            Target.SpecDefence = Target.SpecDefence - 1;
        }

    }

    class Program
    {
        static void Main(string[] args)
        {
            unit grunt = new Battle_Arena.unit();
            grunt.isAlive = true;
            grunt.Print();
            Console.WriteLine("Grunt watches as Soldier is trained");
            Console.WriteLine("-----------------------------------------------------");

            friendly Soldier = new friendly();
            Soldier.name = "Soldier";
            Soldier.isAlive = true;
            Soldier.Health = 100;
            Soldier.Attack = 20;
            Soldier.Defence = 5;
            Soldier.FriendStat();
            Console.WriteLine("Soldier notices Commander is walking by");
            Console.WriteLine("-----------------------------------------------------");

            Captain Commander = new Captain();
            Commander.name = "Commander";
            Commander.isAlive = true;
            Commander.Health = 200;
            Commander.Attack = 50;
            Commander.Defence = 20;
            Commander.SpecAttack = 40;
            Commander.SpecDefence = 20;
            Commander.CaptainStat();
            Console.WriteLine("Commander notices that there is a Hostile near by");
            Console.WriteLine("-----------------------------------------------------");

            hostile Zombie = new hostile();
            Zombie.name = "Zombie";
            Zombie.isAlive = true;
            Zombie.Health = 100;
            Zombie.Attack = 20;
            Zombie.Defence = 5;
            Zombie.HostileStat();
            Console.WriteLine(Zombie.name + "wanders around");
            Console.WriteLine("-----------------------------------------------------");


            Commander.HostileSpecialAttack(Commander, Zombie);
            Console.WriteLine("Commander special attacks " + Zombie.name);
            Zombie.HealthUpdate();
            while (Zombie.isAlive == true)
            {
                Soldier.HostileAttack(Soldier, Zombie);
                Console.WriteLine("Soldier attacks " + Zombie.name);
                Zombie.HealthUpdate();
            }
            Console.WriteLine("-----------------------------------------------------");
            Console.WriteLine("--WARNING, DETECTING MULTIPLE BRUTE CLASS LIFE FORMS IN THE REGION--");

            Brute Reaper = new Brute();
            Reaper.name = "Reaper";
            Reaper.isAlive = true;
            Reaper.Health = 600;
            Reaper.Attack = 60;
            Reaper.Defence = 30;
            Reaper.SpecAttack = 40;
            Reaper.SpecDefence = 20;
            Reaper.HostileBoss();

            Console.WriteLine("");

            Brute Ghost = new Brute();
            Ghost.name = "Ghost";
            Ghost.isAlive = true;
            Ghost.Health = 400;
            Ghost.Attack = 30;
            Ghost.Defence = 20;
            Ghost.SpecAttack = 60;
            Ghost.SpecDefence = 50;
            Ghost.HostileBoss();
            Console.WriteLine("-----------------------------------------------------");

            Ghost.SoldierAttack(Ghost, Soldier);
            Soldier.HealthUpdate();
            Console.WriteLine("-----------------------------------------------------");

            Console.WriteLine("Soldier calls for backup");
            Soldier.BruteAttack(Soldier, Ghost);
            Ghost.HealthUpdate();

            friendly Soldier2 = new friendly();
            Soldier.name = "Soldier";
            Soldier.isAlive = true;
            Soldier.Health = 100;
            Soldier.Attack = 20;
            Soldier.Defence = 5;
            Soldier2.FriendStat();

            friendly FootSoldier = new friendly();
            Soldier.name = "FootSoldier";
            Soldier.isAlive = true;
            Soldier.Health = 100;
            Soldier.Attack = 20;
            Soldier.Defence = 5;
            FootSoldier.FriendStat();

            Captain Captain = new Captain();
            Commander.name = "Captain";
            Commander.isAlive = true;
            Commander.Health = 200;
            Commander.Attack = 50;
            Commander.Defence = 20;
            Commander.SpecAttack = 40;
            Commander.SpecDefence = 20;
            Captain.CaptainStat();

            friendly Swordsman = new friendly();
            Swordsman.name = "Swordsman";
            Swordsman.isAlive = true;
            Swordsman.Health = 100;
            Swordsman.Attack = 20;
            Swordsman.Defence = 5;
            Swordsman.FriendStat();

            friendly Knight = new friendly();
            Soldier.name = "Knight";
            Soldier.isAlive = true;
            Soldier.Health = 100;
            Soldier.Attack = 20;
            Soldier.Defence = 5;
            Soldier2.FriendStat();

            Console.WriteLine("-----------------------------------------------------");
            Console.ReadLine();
        }
    }

}


