#include<iostream>
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;



int main()
{
	////测试代码：
	//worker* worker = null;
	//worker = new employee(1, "张三", 1);
	//worker->showinfo();
	//delete worker;

	//worker = new manager(2, "李四", 2);
	//worker->showinfo();
	//delete worker;

	//worker = new boss(3, "王五", 3);
	//worker->showinfo();
	//delete worker;

	//实例化管理者对象
	WorkerManager wm;
	int choice = 0;

	while (true)
	{
		//调用展示菜单成员函数
		wm.Show_Menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice; //接收用户选项

		switch (choice)
		{
		case 0: //退出系统
			wm.ExistSystem();
			break;
		case 1: //添加职工
			wm.Add_Emp();
			break;
		case 2: //显示职工
			wm.Show_Emp();
			break;
		case 3: //删除职工
			wm.Del_Emp();
			break;
		case 4: //修改职工
			wm.Mod_Emp();
			break;
		case 5: //查找职工
			wm.Find_Emp();
			break;
		case 6: //排序职工
			wm.Sort_Emp();
			break;
		case 7: //清空职工
			wm.Clear_File();
			break;
		default:
			system("cls");
			break;
		}
	}
}