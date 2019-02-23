using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Programm
{
    class Program
    {
        // Mit dieser Funktion kann der Entwickler bestimmen wie oft eine Neue Zeile ausgegeben werden soll. Hierfür muss einfach der Wert in der for-schleife von "4" in eine beliebige Zahl geändert werden.
        static void nz()
        {

            for(int x=1; x < 4; x++)
            {
                Console.WriteLine("\n");
            }

        }
        // Mit dieser Funktion kann der Nutzer selber bestimmen wie oft eine Neue Zeile ausgegeben werden soll 
        static void cstm_nz(int y)
        {

            for (int x = 1; x < y; x++)
            {
                Console.WriteLine("\n");
            }

        }

        static void Main(string[] args)
        {

            int[] eingabe = new int[5];

            double[] input = new double[5];

            Console.WriteLine("\t\tTest Programm\n");

            Console.Write("Geben Sie eine Zahl ein: ");

            eingabe[0] = Convert.ToInt32(Console.ReadLine());

            if (eingabe[0] > 100 || eingabe[0] < 0)
            {

                Console.WriteLine("Dies ist eine Ungültige Eingabe!");

                return;

            }
            else
            {

                Console.WriteLine("\nIhre Eingabe lautete: {0}\n", eingabe[0]);

                Console.WriteLine("\t\tWarnung: \n\t\tDezimalzahlen könnten das Programm zum Absturz bringen!\n");
                Console.WriteLine("\nMoechten Sie das Programm beenden?\n");
                Console.WriteLine("\n0.Ja(fürs beenden des Programmes)\n1.Nein(fürs weiterführen des Programmes)");

                Console.Write("\nGeben Sie eine der oben genannten Werte ein: ");

                eingabe[1] = Convert.ToInt32(Console.ReadLine());

                switch (eingabe[1])
                {

                    case 0:

                        Console.WriteLine("\nDas Programm wird nun beendent!\n");

                        break;

                    case 1:

                        Console.WriteLine("\n1.Taschenrechner");
                        Console.Write("\nGeben Sie nun ein welches Programm Sie nutzen möchten: ");

                        eingabe[2] = Convert.ToInt32(Console.ReadLine());

                        switch (eingabe[2])
                        {

                            case 1:

                                Console.WriteLine("\n1.Addition\n2.Subtraktion\n3.Division\n4.Multiplikation");
                                Console.Write("\nGeben Sie nun ein welches Programm Sie nutzen möchten: ");

                                eingabe[3] = Convert.ToInt32(Console.ReadLine());

                                switch (eingabe[3])
                                {

                                    case 1:

                                        Console.WriteLine("\t\tDer Additionsrechner");

                                        Console.Write("Geben Sie ein wie oft sie eine Zahl Addieren moechten: ");

                                        input[0] = Convert.ToInt32(Console.ReadLine());

                                        for(int x = 1; x <= input[0]; x++)
                                        { 

                                            Console.Write("\nGeben Sie den {0}. Wert ein: ", x);

                                            input[1] = Convert.ToDouble(Console.ReadLine());

                                            input[1] += input[1];
                                        }

                                        Console.WriteLine("\nDie Summe aller Zahlen lautet: {0}", input[1]);

                                        break;

                                }

                                break;

                        }

                        break;

                }
            }
        }
    }
}
