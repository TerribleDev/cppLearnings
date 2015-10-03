using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace cppconsumer
{
	internal class Program
	{
		private static void Main(string[] args)
		{
			Console.WriteLine("2*3=" + multiply(2, 3));
			Console.ReadLine();
		}

		[DllImport("dynamiclib.dll", CallingConvention = CallingConvention.Cdecl)]
		public static extern int multiply(int a, int b);
	}
}