/*Generating suitable sets of two lengths, choosing their beginners and increment, by math if both generates the same number then b1 + m1x and b2 + m2y both intersects which means multiple of each others....etc. suitable sets are S[b1,m2] and S[b2,m2] respectively;*
using System;
namespace SS
{
    class SuitableSet
    {
        public int b, m;
        public int[] set1;
        public SuitableSet(int size)
        {
            set1 = new int[size];
        }
        // program to generate two suitable sets and find their intersection.
        // since both are auto-sorted ascendingly so if the number becomes greater
        // than that number compared to so stop and that elemenent never intersects.
        void GenerateSuitableSet()
        {
            for( int i=0, begin = b; i < set1.Length; i++, begin += m)
            {
                set1[i] = begin;
            }
        }
        void Intersection(SuitableSet s2)
        {
            Console.WriteLine("Results of Intersection, if empty then they don't intersect");
            for (int i = 0; i < this.set1.Length; i++) {
                for (int j = 0; j < s2.set1.Length; j++)
                {
                    if (this.set1[i] == s2.set1[j])
                        Console.Write(this.set1[i].ToString() + ", ");
                    else if (this.set1[i] < s2.set1[j])
                        break;
                } }
        }
        void PrintSet()
        {
            Console.WriteLine("Printing Suitable sets elements");
            for (int i = 0; i < set1.Length; i++)
            {
                Console.Write(set1[i].ToString() + ",");
                    if ((i+1) % 14 == 0)
                    Console.WriteLine();
            }
            Console.WriteLine();


        }
        static void Main(string[] args)
        {
            Console.WriteLine(" size of suitable set length =  ");
            int size = Convert.ToInt32(Console.ReadLine());
            SuitableSet p1 = new SuitableSet(size);
            Console.WriteLine(" beginner b = ");
           p1.b = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(" increment(step) m = ");
            p1.m = Convert.ToInt32(Console.ReadLine());
            p1.GenerateSuitableSet();
            Console.WriteLine(" size of suitable set length =  ");
            int size2 = Convert.ToInt32(Console.ReadLine());
            SuitableSet p2 = new SuitableSet(size2);
            Console.WriteLine(" beginner b = ");
            p2.b = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(" increment(step) m = ");
            p2.m = Convert.ToInt32(Console.ReadLine());
            p2.GenerateSuitableSet();
            p1.PrintSet();
            p2.PrintSet();
            p1.Intersection(p2);
            Console.ReadLine();




        }
    }
} 