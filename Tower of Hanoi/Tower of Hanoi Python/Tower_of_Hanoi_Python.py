def Hanoi_Normal(n,i, j , step):
	if(n>0):
		Hanoi_Normal(n - 1, i, 6 - (i + j),step)
		step[0]+=1
		print(f"\x1b[33mStep:\x1b[0m{step[0]}\n{i}\x1b[1;35m-->\x1b[0m{j}\n\n")
		Hanoi_Normal(n - 1, 6 - (i + j), j,step)

def Hanoi_No_direct_transfer(n,i, j , step):
	if(n>0):
		Hanoi_No_direct_transfer(n - 1, i, j,step)
		step[0]+=1
		print(f"\x1b[33mStep:\x1b[0m{step[0]}\n{i}\x1b[1;35m-->\x1b[0m{6-(j+i)}\n\n")
		Hanoi_No_direct_transfer(n - 1, j, i,step)
		step[0]+=1
		print(f"\x1b[33mStep:\x1b[0m{step[0]}\n{6-(j+i)}\x1b[1;35m-->\x1b[0m{j}\n\n")
		Hanoi_No_direct_transfer(n-1, i , j , step)
	

while True:
		step = [0]
		D_num = int(input("\033c\033[1;3;31mPlease enter the number of your disks: \033[0m"))
		choice = input("\n\033[1;3;34mPlease select your issue type:\033[0m\n\033[3;33m1)\033[0m \033[3mNormal\033[0m \n\033[3;33m2)\033[0m \033[3mNo direct disk transfer from i to j\033[0m \n\033[3;33mOther keys)\033[0m \033[3mExit the program\033[0m \n\033[1;3;32mYour choice:\033[0m ")
		if (choice == "1"):
			print("\033c")
			print("\033[5;4;3;1;33m*******(Normal Hanoi)*******\033[0m\n")
			Hanoi_Normal(D_num, 1, 3, step)
			Enter = input("\033[1;5;31mPress Enter to continue...\033[0m")

		
		elif (choice == "2"):
			print("\033c")
			print("\033[5;4;3;1;33m*******(Hanoi No direct transfer)*******\033[0m\n")
			Hanoi_No_direct_transfer(D_num, 1, 3, step)
			Enter = input("\033[1;5;31mPress Enter to continue...\033[0m")
		else:
			exit()