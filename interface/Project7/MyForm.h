#pragma once
#include <cstdlib>
#include <cstdio>
#include <ctime>

namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			for (int i = 0; i < 1000; i++)
				sold[i] = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Label^  Admin;
	private: System::Windows::Forms::Label^  Admpass;
	private: System::Windows::Forms::TextBox^  Admin_in;
	private: System::Windows::Forms::TextBox^  Adpass_in;
	private: System::Windows::Forms::Button^  Login;
	private: System::Windows::Forms::GroupBox^  Main;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  page1;

	private: System::Windows::Forms::SplitContainer^  splitContainer1;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  clientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  removeClientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  accountsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addAccountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  removeAccountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  operationsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  depositToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  withrawToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  transferToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addAdmnAccountToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  changePasswordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  heeeeeeelpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logOutToolStripMenuItem;
	private: System::Windows::Forms::Button^  Srch;
	private: System::Windows::Forms::TextBox^  Search;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Splitter^  splitter1;
	private: System::Windows::Forms::Label^  resultLabel4;

	private: System::Windows::Forms::Label^  resultLabel3;

	private: System::Windows::Forms::Label^  resultLabel2;

	private: System::Windows::Forms::Label^  resultLabel1;

	private: System::Windows::Forms::TextBox^  resultBox10;
	private: System::Windows::Forms::TextBox^  resultBox9;
	private: System::Windows::Forms::TextBox^  resultBox8;
	private: System::Windows::Forms::TextBox^  resultBox7;
	private: System::Windows::Forms::TextBox^  resultBox6;
	private: System::Windows::Forms::TextBox^  resultBox5;
	private: System::Windows::Forms::TextBox^  resultBox4;
	private: System::Windows::Forms::TextBox^  resultBox3;
	private: System::Windows::Forms::TextBox^  resultBox2;
	private: System::Windows::Forms::TextBox^  resultBox1;
	private: System::Windows::Forms::Label^  resultLabel10;

	private: System::Windows::Forms::Label^  resultLabel9;

	private: System::Windows::Forms::Label^  resultLabel8;



	private: System::Windows::Forms::Label^  resultLabel7;

	private: System::Windows::Forms::Label^  resultLabel6;

	private: System::Windows::Forms::Label^  resultLabel5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::TabPage^  page2;

	private: System::Windows::Forms::GroupBox^  ADDCLIENT;

	private: System::Windows::Forms::Label^  addlabel4;

	private: System::Windows::Forms::Label^  addlabel3;

	private: System::Windows::Forms::Label^  addlabel2;

	private: System::Windows::Forms::Label^  addlabel1;
	private: System::Windows::Forms::Label^  addlabel5;



	private: System::Windows::Forms::TextBox^  addacc6;
	private: System::Windows::Forms::TextBox^  addacc5;
	private: System::Windows::Forms::TextBox^  addacc4;
	private: System::Windows::Forms::TextBox^  addacc3;
	private: System::Windows::Forms::TextBox^  addacc2;
	private: System::Windows::Forms::TextBox^  addacc1;
	private: System::Windows::Forms::Label^  addlabel6;
	private: System::Windows::Forms::Button^  Create;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
private: System::Windows::Forms::GroupBox^  Delacc;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TextBox^  Dellacc1_1;


private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  Dellacc1_2;


private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TextBox^  Dellacc1_3;


private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TextBox^  Dellacc1_4;

private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel8;
private: System::Windows::Forms::CheckBox^  check8;

private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TextBox^  Dellacc8_1;

private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  Dellacc8_2;

private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  Dellacc8_3;

private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::TextBox^  Dellacc8_4;

private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel7;
private: System::Windows::Forms::CheckBox^  check7;

private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TextBox^  Dellacc7_1;

private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  Dellacc7_2;

private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  Dellacc7_3;

private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  Dellacc7_4;

private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel6;
private: System::Windows::Forms::CheckBox^  check6;

private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  Dellacc6_1;

private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TextBox^  Dellacc6_2;

private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  Dellacc6_3;

private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TextBox^  Dellacc6_4;

private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel5;
private: System::Windows::Forms::CheckBox^  check5;

private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  Dellacc5_1;

private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  Dellacc5_2;

private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  Dellacc5_3;

private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::TextBox^  Dellacc5_4;

private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel4;
private: System::Windows::Forms::CheckBox^  check4;

private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::TextBox^  Dellacc4_1;

private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::TextBox^  Dellacc4_2;

private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::TextBox^  Dellacc4_3;

private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  Dellacc4_4;

private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel3;
private: System::Windows::Forms::CheckBox^  check3;

private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::TextBox^  Dellacc3_1;

private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TextBox^  Dellacc3_2;

private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::TextBox^  Dellacc3_3;

private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::TextBox^  Dellacc3_4;

private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel2;
private: System::Windows::Forms::CheckBox^  check2;

private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  Dellacc2_1;


private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TextBox^  Dellacc2_2;

private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::TextBox^  Dellacc2_3;

private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  Dellacc2_4;
private: System::Windows::Forms::CheckBox^  check1;


private: System::Windows::Forms::Button^  DELETE;
private: System::Windows::Forms::Button^  DelSearchBtn;
private: System::Windows::Forms::TextBox^  Delsearch;
private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton1;
private: System::Windows::Forms::TabPage^  page3;

private: System::Windows::Forms::GroupBox^  ACCADD;

private: System::Windows::Forms::Button^  CreateACC;
private: System::Windows::Forms::TextBox^  accadd3;
private: System::Windows::Forms::TextBox^  accadd2;
private: System::Windows::Forms::TextBox^  accadd1;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::GroupBox^  DelAC;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  serchdata;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
private: System::Windows::Forms::FlowLayoutPanel^  addaccfl6;
private: System::Windows::Forms::CheckBox^  dlcheckBox6;












private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::TextBox^  delacc6_1;






private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::TextBox^  delacc6_3;
private: System::Windows::Forms::FlowLayoutPanel^  addaccfl5;
private: System::Windows::Forms::CheckBox^  dlcheckBox5;




private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::TextBox^  delacc5_1;






private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::TextBox^  delacc5_3;
private: System::Windows::Forms::FlowLayoutPanel^  addaccfl4;
private: System::Windows::Forms::CheckBox^  dlcheckBox4;













private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::TextBox^  delacc4_1;






private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::TextBox^  delacc4_3;
private: System::Windows::Forms::FlowLayoutPanel^  addaccfl3;
private: System::Windows::Forms::CheckBox^  dlcheckBox3;



private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::TextBox^  delacc3_1;






private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::TextBox^  delacc3_3;
private: System::Windows::Forms::FlowLayoutPanel^  addaccfl2;
private: System::Windows::Forms::CheckBox^  dlcheckBox2;



private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::TextBox^  delacc2_1;






private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::TextBox^  delacc2_3;
private: System::Windows::Forms::FlowLayoutPanel^  addaccfl1;
private: System::Windows::Forms::CheckBox^  dlcheckBox1;



private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::TextBox^  delacc1_1;






private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::TextBox^  delacc1_3;
private: System::Windows::Forms::Button^  Delacc2;
private: System::Windows::Forms::TabPage^  page4;

private: System::Windows::Forms::SplitContainer^  splitContainer2;
private: System::Windows::Forms::GroupBox^  Withraw;

private: System::Windows::Forms::TextBox^  Withrout;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::GroupBox^  Deposit;
private: System::Windows::Forms::TextBox^  deposin;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Button^  opsrchbtn;
private: System::Windows::Forms::TextBox^  opsearch;
private: System::Windows::Forms::Button^  WithrawConf;
private: System::Windows::Forms::Button^  DeposConfirm;

private: System::Windows::Forms::Splitter^  splitter2;



private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::TextBox^  opsearch2;
private: System::Windows::Forms::GroupBox^  Transfre;
private: System::Windows::Forms::Button^  opconfirm;

private: System::Windows::Forms::TextBox^  TransferI_T;
private: System::Windows::Forms::Label^  label41;










private: System::Windows::Forms::Button^  EXIT;
private: System::Windows::Forms::Button^  Minimize;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::TabPage^  page5;

private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::TextBox^  admnm;
private: System::Windows::Forms::TextBox^  admnpss;
private: System::Windows::Forms::TextBox^  psscnf;
private: System::Windows::Forms::Button^  admncrt;
private: System::Windows::Forms::GroupBox^  passchange;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::TextBox^  rnewpass;
private: System::Windows::Forms::TextBox^  newpass;
private: System::Windows::Forms::TextBox^  oldpass;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::GroupBox^  addadmn;

private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Button^  admncrt1;
private: System::Windows::Forms::TextBox^  psscnf1;

private: System::Windows::Forms::TextBox^  admnpss1;

private: System::Windows::Forms::TextBox^  admnm1;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
private: System::Windows::Forms::TextBox^  soldtext;

private: System::Windows::Forms::TextBox^  nametext;

private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::DateTimePicker^  datecheck;










































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea10 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea12 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea11 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Admin = (gcnew System::Windows::Forms::Label());
			this->Admpass = (gcnew System::Windows::Forms::Label());
			this->Admin_in = (gcnew System::Windows::Forms::TextBox());
			this->Adpass_in = (gcnew System::Windows::Forms::TextBox());
			this->Login = (gcnew System::Windows::Forms::Button());
			this->Main = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Minimize = (gcnew System::Windows::Forms::Button());
			this->EXIT = (gcnew System::Windows::Forms::Button());
			this->Srch = (gcnew System::Windows::Forms::Button());
			this->Search = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->page1 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->datecheck = (gcnew System::Windows::Forms::DateTimePicker());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->soldtext = (gcnew System::Windows::Forms::TextBox());
			this->nametext = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->resultBox10 = (gcnew System::Windows::Forms::TextBox());
			this->resultBox9 = (gcnew System::Windows::Forms::TextBox());
			this->resultBox8 = (gcnew System::Windows::Forms::TextBox());
			this->resultBox7 = (gcnew System::Windows::Forms::TextBox());
			this->resultBox6 = (gcnew System::Windows::Forms::TextBox());
			this->resultBox5 = (gcnew System::Windows::Forms::TextBox());
			this->resultBox4 = (gcnew System::Windows::Forms::TextBox());
			this->resultBox3 = (gcnew System::Windows::Forms::TextBox());
			this->resultBox2 = (gcnew System::Windows::Forms::TextBox());
			this->resultBox1 = (gcnew System::Windows::Forms::TextBox());
			this->resultLabel10 = (gcnew System::Windows::Forms::Label());
			this->resultLabel9 = (gcnew System::Windows::Forms::Label());
			this->resultLabel8 = (gcnew System::Windows::Forms::Label());
			this->resultLabel7 = (gcnew System::Windows::Forms::Label());
			this->resultLabel6 = (gcnew System::Windows::Forms::Label());
			this->resultLabel5 = (gcnew System::Windows::Forms::Label());
			this->resultLabel4 = (gcnew System::Windows::Forms::Label());
			this->resultLabel3 = (gcnew System::Windows::Forms::Label());
			this->resultLabel2 = (gcnew System::Windows::Forms::Label());
			this->resultLabel1 = (gcnew System::Windows::Forms::Label());
			this->page2 = (gcnew System::Windows::Forms::TabPage());
			this->ADDCLIENT = (gcnew System::Windows::Forms::GroupBox());
			this->Delacc = (gcnew System::Windows::Forms::GroupBox());
			this->DELETE = (gcnew System::Windows::Forms::Button());
			this->DelSearchBtn = (gcnew System::Windows::Forms::Button());
			this->Delsearch = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->check8 = (gcnew System::Windows::Forms::CheckBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->Dellacc8_1 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->Dellacc8_2 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->Dellacc8_3 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->Dellacc8_4 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->check7 = (gcnew System::Windows::Forms::CheckBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->Dellacc7_1 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->Dellacc7_2 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->Dellacc7_3 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->Dellacc7_4 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->check6 = (gcnew System::Windows::Forms::CheckBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->Dellacc6_1 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Dellacc6_2 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Dellacc6_3 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->Dellacc6_4 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->check5 = (gcnew System::Windows::Forms::CheckBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Dellacc5_1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Dellacc5_2 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Dellacc5_3 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Dellacc5_4 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->check4 = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Dellacc4_1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Dellacc4_2 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Dellacc4_3 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Dellacc4_4 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->check3 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Dellacc3_1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Dellacc3_2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Dellacc3_3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Dellacc3_4 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->check2 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Dellacc2_1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Dellacc2_2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Dellacc2_3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Dellacc2_4 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->check1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Dellacc1_1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Dellacc1_2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Dellacc1_3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Dellacc1_4 = (gcnew System::Windows::Forms::TextBox());
			this->Create = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->addacc6 = (gcnew System::Windows::Forms::TextBox());
			this->addacc5 = (gcnew System::Windows::Forms::TextBox());
			this->addacc4 = (gcnew System::Windows::Forms::TextBox());
			this->addacc3 = (gcnew System::Windows::Forms::TextBox());
			this->addacc2 = (gcnew System::Windows::Forms::TextBox());
			this->addacc1 = (gcnew System::Windows::Forms::TextBox());
			this->addlabel6 = (gcnew System::Windows::Forms::Label());
			this->addlabel5 = (gcnew System::Windows::Forms::Label());
			this->addlabel4 = (gcnew System::Windows::Forms::Label());
			this->addlabel3 = (gcnew System::Windows::Forms::Label());
			this->addlabel2 = (gcnew System::Windows::Forms::Label());
			this->addlabel1 = (gcnew System::Windows::Forms::Label());
			this->page3 = (gcnew System::Windows::Forms::TabPage());
			this->ACCADD = (gcnew System::Windows::Forms::GroupBox());
			this->DelAC = (gcnew System::Windows::Forms::GroupBox());
			this->Delacc2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->serchdata = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->addaccfl6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->dlcheckBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->delacc6_1 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->delacc6_3 = (gcnew System::Windows::Forms::TextBox());
			this->addaccfl5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->dlcheckBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->delacc5_1 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->delacc5_3 = (gcnew System::Windows::Forms::TextBox());
			this->addaccfl4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->dlcheckBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->delacc4_1 = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->delacc4_3 = (gcnew System::Windows::Forms::TextBox());
			this->addaccfl3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->dlcheckBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->delacc3_1 = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->delacc3_3 = (gcnew System::Windows::Forms::TextBox());
			this->addaccfl2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->dlcheckBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->delacc2_1 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->delacc2_3 = (gcnew System::Windows::Forms::TextBox());
			this->addaccfl1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->dlcheckBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->delacc1_1 = (gcnew System::Windows::Forms::TextBox());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->delacc1_3 = (gcnew System::Windows::Forms::TextBox());
			this->CreateACC = (gcnew System::Windows::Forms::Button());
			this->accadd3 = (gcnew System::Windows::Forms::TextBox());
			this->accadd2 = (gcnew System::Windows::Forms::TextBox());
			this->accadd1 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->page4 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->Transfre = (gcnew System::Windows::Forms::GroupBox());
			this->opconfirm = (gcnew System::Windows::Forms::Button());
			this->TransferI_T = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->Withraw = (gcnew System::Windows::Forms::GroupBox());
			this->WithrawConf = (gcnew System::Windows::Forms::Button());
			this->Withrout = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->Deposit = (gcnew System::Windows::Forms::GroupBox());
			this->DeposConfirm = (gcnew System::Windows::Forms::Button());
			this->deposin = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->opsearch2 = (gcnew System::Windows::Forms::TextBox());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->opsrchbtn = (gcnew System::Windows::Forms::Button());
			this->opsearch = (gcnew System::Windows::Forms::TextBox());
			this->page5 = (gcnew System::Windows::Forms::TabPage());
			this->addadmn = (gcnew System::Windows::Forms::GroupBox());
			this->psscnf1 = (gcnew System::Windows::Forms::TextBox());
			this->admnpss1 = (gcnew System::Windows::Forms::TextBox());
			this->admnm1 = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->admncrt1 = (gcnew System::Windows::Forms::Button());
			this->passchange = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->rnewpass = (gcnew System::Windows::Forms::TextBox());
			this->newpass = (gcnew System::Windows::Forms::TextBox());
			this->oldpass = (gcnew System::Windows::Forms::TextBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->clientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeClientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->accountsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->depositToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->withrawToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transferToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addAdmnAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changePasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->heeeeeeelpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->admnm = (gcnew System::Windows::Forms::TextBox());
			this->admnpss = (gcnew System::Windows::Forms::TextBox());
			this->psscnf = (gcnew System::Windows::Forms::TextBox());
			this->admncrt = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Main->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->page1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->page2->SuspendLayout();
			this->ADDCLIENT->SuspendLayout();
			this->Delacc->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel8->SuspendLayout();
			this->flowLayoutPanel7->SuspendLayout();
			this->flowLayoutPanel6->SuspendLayout();
			this->flowLayoutPanel5->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->page3->SuspendLayout();
			this->ACCADD->SuspendLayout();
			this->DelAC->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->addaccfl6->SuspendLayout();
			this->addaccfl5->SuspendLayout();
			this->addaccfl4->SuspendLayout();
			this->addaccfl3->SuspendLayout();
			this->addaccfl2->SuspendLayout();
			this->addaccfl1->SuspendLayout();
			this->page4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->Transfre->SuspendLayout();
			this->Withraw->SuspendLayout();
			this->Deposit->SuspendLayout();
			this->page5->SuspendLayout();
			this->addadmn->SuspendLayout();
			this->passchange->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(388, 61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(215, 208);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Admin
			// 
			this->Admin->AutoSize = true;
			this->Admin->BackColor = System::Drawing::Color::Transparent;
			this->Admin->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Admin->Location = System::Drawing::Point(385, 286);
			this->Admin->Name = L"Admin";
			this->Admin->Size = System::Drawing::Size(118, 16);
			this->Admin->TabIndex = 1;
			this->Admin->Text = L"Account N° / Name :";
			// 
			// Admpass
			// 
			this->Admpass->AutoSize = true;
			this->Admpass->BackColor = System::Drawing::Color::Transparent;
			this->Admpass->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Admpass->Location = System::Drawing::Point(385, 316);
			this->Admpass->Name = L"Admpass";
			this->Admpass->Size = System::Drawing::Size(66, 16);
			this->Admpass->TabIndex = 2;
			this->Admpass->Text = L"Password :";
			// 
			// Admin_in
			// 
			this->Admin_in->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Admin_in->Location = System::Drawing::Point(499, 286);
			this->Admin_in->Name = L"Admin_in";
			this->Admin_in->Size = System::Drawing::Size(104, 22);
			this->Admin_in->TabIndex = 3;
			// 
			// Adpass_in
			// 
			this->Adpass_in->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adpass_in->Location = System::Drawing::Point(499, 313);
			this->Adpass_in->Name = L"Adpass_in";
			this->Adpass_in->Size = System::Drawing::Size(104, 22);
			this->Adpass_in->TabIndex = 4;
			// 
			// Login
			// 
			this->Login->Location = System::Drawing::Point(388, 348);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(215, 23);
			this->Login->TabIndex = 5;
			this->Login->Text = L"LOG_IN";
			this->Login->UseVisualStyleBackColor = true;
			this->Login->Click += gcnew System::EventHandler(this, &MyForm::Login_Click);
			// 
			// Main
			// 
			this->Main->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Main->Controls->Add(this->button2);
			this->Main->Controls->Add(this->Minimize);
			this->Main->Controls->Add(this->EXIT);
			this->Main->Controls->Add(this->Srch);
			this->Main->Controls->Add(this->Search);
			this->Main->Controls->Add(this->tabControl1);
			this->Main->Controls->Add(this->menuStrip1);
			this->Main->Enabled = false;
			this->Main->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Main->Location = System::Drawing::Point(12, 12);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(984, 577);
			this->Main->TabIndex = 6;
			this->Main->TabStop = false;
			this->Main->Visible = false;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(886, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 25);
			this->button2->TabIndex = 6;
			this->button2->Text = L"MAIN";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Minimize
			// 
			this->Minimize->BackColor = System::Drawing::Color::Transparent;
			this->Minimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Minimize->FlatAppearance->BorderSize = 0;
			this->Minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Minimize->ForeColor = System::Drawing::Color::Black;
			this->Minimize->Location = System::Drawing::Point(927, 16);
			this->Minimize->Name = L"Minimize";
			this->Minimize->Size = System::Drawing::Size(27, 25);
			this->Minimize->TabIndex = 5;
			this->Minimize->Text = L"-";
			this->Minimize->UseVisualStyleBackColor = false;
			this->Minimize->Click += gcnew System::EventHandler(this, &MyForm::Minimize_Click);
			// 
			// EXIT
			// 
			this->EXIT->BackColor = System::Drawing::Color::Transparent;
			this->EXIT->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->EXIT->FlatAppearance->BorderSize = 0;
			this->EXIT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EXIT->Location = System::Drawing::Point(954, 16);
			this->EXIT->Name = L"EXIT";
			this->EXIT->Size = System::Drawing::Size(27, 25);
			this->EXIT->TabIndex = 4;
			this->EXIT->Text = L"X";
			this->EXIT->UseVisualStyleBackColor = false;
			this->EXIT->Click += gcnew System::EventHandler(this, &MyForm::EXIT_Click);
			// 
			// Srch
			// 
			this->Srch->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Srch.BackgroundImage")));
			this->Srch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Srch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Srch->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->Srch->Location = System::Drawing::Point(839, 16);
			this->Srch->Name = L"Srch";
			this->Srch->Size = System::Drawing::Size(25, 25);
			this->Srch->TabIndex = 3;
			this->Srch->UseVisualStyleBackColor = true;
			this->Srch->Click += gcnew System::EventHandler(this, &MyForm::Srch_Click);
			// 
			// Search
			// 
			this->Search->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->Location = System::Drawing::Point(703, 16);
			this->Search->Multiline = true;
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(137, 25);
			this->Search->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->page1);
			this->tabControl1->Controls->Add(this->page2);
			this->tabControl1->Controls->Add(this->page3);
			this->tabControl1->Controls->Add(this->page4);
			this->tabControl1->Controls->Add(this->page5);
			this->tabControl1->Location = System::Drawing::Point(6, 43);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(972, 528);
			this->tabControl1->TabIndex = 1;
			// 
			// page1
			// 
			this->page1->Controls->Add(this->splitContainer1);
			this->page1->ForeColor = System::Drawing::Color::Transparent;
			this->page1->Location = System::Drawing::Point(4, 22);
			this->page1->Name = L"page1";
			this->page1->Padding = System::Windows::Forms::Padding(3);
			this->page1->Size = System::Drawing::Size(964, 502);
			this->page1->TabIndex = 0;
			this->page1->Text = L"Main";
			this->page1->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->datecheck);
			this->splitContainer1->Panel1->Controls->Add(this->chart1);
			this->splitContainer1->Panel1->Controls->Add(this->splitter1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->groupBox1);
			this->splitContainer1->Panel2->Controls->Add(this->chart2);
			this->splitContainer1->Panel2->Controls->Add(this->resultBox10);
			this->splitContainer1->Panel2->Controls->Add(this->resultBox9);
			this->splitContainer1->Panel2->Controls->Add(this->resultBox8);
			this->splitContainer1->Panel2->Controls->Add(this->resultBox7);
			this->splitContainer1->Panel2->Controls->Add(this->resultBox6);
			this->splitContainer1->Panel2->Controls->Add(this->resultBox5);
			this->splitContainer1->Panel2->Controls->Add(this->resultBox4);
			this->splitContainer1->Panel2->Controls->Add(this->resultBox3);
			this->splitContainer1->Panel2->Controls->Add(this->resultBox2);
			this->splitContainer1->Panel2->Controls->Add(this->resultBox1);
			this->splitContainer1->Panel2->Controls->Add(this->resultLabel10);
			this->splitContainer1->Panel2->Controls->Add(this->resultLabel9);
			this->splitContainer1->Panel2->Controls->Add(this->resultLabel8);
			this->splitContainer1->Panel2->Controls->Add(this->resultLabel7);
			this->splitContainer1->Panel2->Controls->Add(this->resultLabel6);
			this->splitContainer1->Panel2->Controls->Add(this->resultLabel5);
			this->splitContainer1->Panel2->Controls->Add(this->resultLabel4);
			this->splitContainer1->Panel2->Controls->Add(this->resultLabel3);
			this->splitContainer1->Panel2->Controls->Add(this->resultLabel2);
			this->splitContainer1->Panel2->Controls->Add(this->resultLabel1);
			this->splitContainer1->Panel2Collapsed = true;
			this->splitContainer1->Size = System::Drawing::Size(958, 496);
			this->splitContainer1->SplitterDistance = 319;
			this->splitContainer1->TabIndex = 0;
			// 
			// datecheck
			// 
			this->datecheck->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->datecheck->Location = System::Drawing::Point(9, 3);
			this->datecheck->Name = L"datecheck";
			this->datecheck->Size = System::Drawing::Size(87, 20);
			this->datecheck->TabIndex = 2;
			this->datecheck->Value = System::DateTime(2018, 12, 22, 0, 0, 0, 0);
			this->datecheck->Visible = false;
			// 
			// chart1
			// 
			chartArea10->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea10);
			legend10->Name = L"Legend1";
			this->chart1->Legends->Add(legend10);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(958, 493);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 496);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chart3);
			this->groupBox1->Controls->Add(this->soldtext);
			this->groupBox1->Controls->Add(this->nametext);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(7, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(934, 490);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// chart3
			// 
			chartArea12->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea12);
			legend12->Name = L"Legend1";
			this->chart3->Legends->Add(legend12);
			this->chart3->Location = System::Drawing::Point(139, 97);
			this->chart3->Name = L"chart3";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart3->Series->Add(series4);
			this->chart3->Size = System::Drawing::Size(604, 369);
			this->chart3->TabIndex = 5;
			this->chart3->Text = L"chart3";
			// 
			// soldtext
			// 
			this->soldtext->Location = System::Drawing::Point(139, 71);
			this->soldtext->Name = L"soldtext";
			this->soldtext->Size = System::Drawing::Size(100, 20);
			this->soldtext->TabIndex = 4;
			// 
			// nametext
			// 
			this->nametext->Location = System::Drawing::Point(139, 45);
			this->nametext->Name = L"nametext";
			this->nametext->Size = System::Drawing::Size(100, 20);
			this->nametext->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(33, 97);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Latest Transaction :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Total sold :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Account owner :";
			// 
			// chart2
			// 
			chartArea11->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea11);
			legend11->Name = L"Legend1";
			this->chart2->Legends->Add(legend11);
			this->chart2->Location = System::Drawing::Point(249, 24);
			this->chart2->Name = L"chart2";
			this->chart2->Size = System::Drawing::Size(685, 401);
			this->chart2->TabIndex = 20;
			this->chart2->Text = L"chart2";
			// 
			// resultBox10
			// 
			this->resultBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultBox10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->resultBox10->Location = System::Drawing::Point(143, 230);
			this->resultBox10->Name = L"resultBox10";
			this->resultBox10->Size = System::Drawing::Size(100, 13);
			this->resultBox10->TabIndex = 19;
			// 
			// resultBox9
			// 
			this->resultBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultBox9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->resultBox9->Location = System::Drawing::Point(143, 206);
			this->resultBox9->Name = L"resultBox9";
			this->resultBox9->Size = System::Drawing::Size(100, 13);
			this->resultBox9->TabIndex = 18;
			// 
			// resultBox8
			// 
			this->resultBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultBox8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->resultBox8->Location = System::Drawing::Point(143, 184);
			this->resultBox8->Name = L"resultBox8";
			this->resultBox8->Size = System::Drawing::Size(100, 13);
			this->resultBox8->TabIndex = 17;
			// 
			// resultBox7
			// 
			this->resultBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultBox7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->resultBox7->Location = System::Drawing::Point(143, 161);
			this->resultBox7->Name = L"resultBox7";
			this->resultBox7->Size = System::Drawing::Size(100, 13);
			this->resultBox7->TabIndex = 16;
			// 
			// resultBox6
			// 
			this->resultBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->resultBox6->Location = System::Drawing::Point(143, 139);
			this->resultBox6->Name = L"resultBox6";
			this->resultBox6->Size = System::Drawing::Size(100, 13);
			this->resultBox6->TabIndex = 15;
			// 
			// resultBox5
			// 
			this->resultBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->resultBox5->Location = System::Drawing::Point(103, 113);
			this->resultBox5->Name = L"resultBox5";
			this->resultBox5->Size = System::Drawing::Size(100, 13);
			this->resultBox5->TabIndex = 14;
			// 
			// resultBox4
			// 
			this->resultBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->resultBox4->Location = System::Drawing::Point(103, 91);
			this->resultBox4->Name = L"resultBox4";
			this->resultBox4->Size = System::Drawing::Size(100, 13);
			this->resultBox4->TabIndex = 13;
			// 
			// resultBox3
			// 
			this->resultBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->resultBox3->Location = System::Drawing::Point(103, 68);
			this->resultBox3->Name = L"resultBox3";
			this->resultBox3->Size = System::Drawing::Size(100, 13);
			this->resultBox3->TabIndex = 12;
			// 
			// resultBox2
			// 
			this->resultBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->resultBox2->Location = System::Drawing::Point(103, 45);
			this->resultBox2->Name = L"resultBox2";
			this->resultBox2->Size = System::Drawing::Size(100, 13);
			this->resultBox2->TabIndex = 11;
			// 
			// resultBox1
			// 
			this->resultBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->resultBox1->Location = System::Drawing::Point(103, 21);
			this->resultBox1->Name = L"resultBox1";
			this->resultBox1->Size = System::Drawing::Size(100, 13);
			this->resultBox1->TabIndex = 10;
			// 
			// resultLabel10
			// 
			this->resultLabel10->AutoSize = true;
			this->resultLabel10->Location = System::Drawing::Point(61, 233);
			this->resultLabel10->Name = L"resultLabel10";
			this->resultLabel10->Size = System::Drawing::Size(76, 13);
			this->resultLabel10->TabIndex = 9;
			this->resultLabel10->Text = L"Account 5 ID :";
			// 
			// resultLabel9
			// 
			this->resultLabel9->AutoSize = true;
			this->resultLabel9->Location = System::Drawing::Point(61, 209);
			this->resultLabel9->Name = L"resultLabel9";
			this->resultLabel9->Size = System::Drawing::Size(76, 13);
			this->resultLabel9->TabIndex = 8;
			this->resultLabel9->Text = L"Account 4 ID :";
			// 
			// resultLabel8
			// 
			this->resultLabel8->AutoSize = true;
			this->resultLabel8->Location = System::Drawing::Point(61, 187);
			this->resultLabel8->Name = L"resultLabel8";
			this->resultLabel8->Size = System::Drawing::Size(76, 13);
			this->resultLabel8->TabIndex = 7;
			this->resultLabel8->Text = L"Account 3 ID :";
			// 
			// resultLabel7
			// 
			this->resultLabel7->AutoSize = true;
			this->resultLabel7->Location = System::Drawing::Point(61, 164);
			this->resultLabel7->Name = L"resultLabel7";
			this->resultLabel7->Size = System::Drawing::Size(76, 13);
			this->resultLabel7->TabIndex = 6;
			this->resultLabel7->Text = L"Account 2 ID :";
			// 
			// resultLabel6
			// 
			this->resultLabel6->AutoSize = true;
			this->resultLabel6->Location = System::Drawing::Point(61, 142);
			this->resultLabel6->Name = L"resultLabel6";
			this->resultLabel6->Size = System::Drawing::Size(76, 13);
			this->resultLabel6->TabIndex = 5;
			this->resultLabel6->Text = L"Account 1 ID :";
			// 
			// resultLabel5
			// 
			this->resultLabel5->AutoSize = true;
			this->resultLabel5->Location = System::Drawing::Point(37, 117);
			this->resultLabel5->Name = L"resultLabel5";
			this->resultLabel5->Size = System::Drawing::Size(58, 13);
			this->resultLabel5->TabIndex = 4;
			this->resultLabel5->Text = L"Accounts :";
			// 
			// resultLabel4
			// 
			this->resultLabel4->AutoSize = true;
			this->resultLabel4->Location = System::Drawing::Point(37, 94);
			this->resultLabel4->Name = L"resultLabel4";
			this->resultLabel4->Size = System::Drawing::Size(37, 13);
			this->resultLabel4->TabIndex = 3;
			this->resultLabel4->Text = L"Sold : ";
			// 
			// resultLabel3
			// 
			this->resultLabel3->AutoSize = true;
			this->resultLabel3->Location = System::Drawing::Point(37, 71);
			this->resultLabel3->Name = L"resultLabel3";
			this->resultLabel3->Size = System::Drawing::Size(59, 13);
			this->resultLabel3->TabIndex = 2;
			this->resultLabel3->Text = L"Phone N° :";
			// 
			// resultLabel2
			// 
			this->resultLabel2->AutoSize = true;
			this->resultLabel2->Location = System::Drawing::Point(37, 48);
			this->resultLabel2->Name = L"resultLabel2";
			this->resultLabel2->Size = System::Drawing::Size(53, 13);
			this->resultLabel2->TabIndex = 1;
			this->resultLabel2->Text = L"Client ID :";
			// 
			// resultLabel1
			// 
			this->resultLabel1->AutoSize = true;
			this->resultLabel1->Location = System::Drawing::Point(37, 24);
			this->resultLabel1->Name = L"resultLabel1";
			this->resultLabel1->Size = System::Drawing::Size(60, 13);
			this->resultLabel1->TabIndex = 0;
			this->resultLabel1->Text = L"Full Name :";
			// 
			// page2
			// 
			this->page2->AutoScroll = true;
			this->page2->Controls->Add(this->ADDCLIENT);
			this->page2->Location = System::Drawing::Point(4, 22);
			this->page2->Name = L"page2";
			this->page2->Size = System::Drawing::Size(964, 502);
			this->page2->TabIndex = 1;
			this->page2->Text = L"client manip";
			this->page2->UseVisualStyleBackColor = true;
			// 
			// ADDCLIENT
			// 
			this->ADDCLIENT->Controls->Add(this->Delacc);
			this->ADDCLIENT->Controls->Add(this->Create);
			this->ADDCLIENT->Controls->Add(this->dateTimePicker1);
			this->ADDCLIENT->Controls->Add(this->addacc6);
			this->ADDCLIENT->Controls->Add(this->addacc5);
			this->ADDCLIENT->Controls->Add(this->addacc4);
			this->ADDCLIENT->Controls->Add(this->addacc3);
			this->ADDCLIENT->Controls->Add(this->addacc2);
			this->ADDCLIENT->Controls->Add(this->addacc1);
			this->ADDCLIENT->Controls->Add(this->addlabel6);
			this->ADDCLIENT->Controls->Add(this->addlabel5);
			this->ADDCLIENT->Controls->Add(this->addlabel4);
			this->ADDCLIENT->Controls->Add(this->addlabel3);
			this->ADDCLIENT->Controls->Add(this->addlabel2);
			this->ADDCLIENT->Controls->Add(this->addlabel1);
			this->ADDCLIENT->Enabled = false;
			this->ADDCLIENT->Location = System::Drawing::Point(0, 0);
			this->ADDCLIENT->Name = L"ADDCLIENT";
			this->ADDCLIENT->Size = System::Drawing::Size(961, 499);
			this->ADDCLIENT->TabIndex = 0;
			this->ADDCLIENT->TabStop = false;
			this->ADDCLIENT->Visible = false;
			// 
			// Delacc
			// 
			this->Delacc->Controls->Add(this->DELETE);
			this->Delacc->Controls->Add(this->DelSearchBtn);
			this->Delacc->Controls->Add(this->Delsearch);
			this->Delacc->Controls->Add(this->radioButton2);
			this->Delacc->Controls->Add(this->radioButton1);
			this->Delacc->Controls->Add(this->tableLayoutPanel1);
			this->Delacc->Enabled = false;
			this->Delacc->Location = System::Drawing::Point(0, 0);
			this->Delacc->Name = L"Delacc";
			this->Delacc->Size = System::Drawing::Size(968, 499);
			this->Delacc->TabIndex = 14;
			this->Delacc->TabStop = false;
			this->Delacc->Visible = false;
			// 
			// DELETE
			// 
			this->DELETE->Location = System::Drawing::Point(845, 460);
			this->DELETE->Name = L"DELETE";
			this->DELETE->Size = System::Drawing::Size(100, 23);
			this->DELETE->TabIndex = 6;
			this->DELETE->Text = L"Delete";
			this->DELETE->UseVisualStyleBackColor = true;
			this->DELETE->Click += gcnew System::EventHandler(this, &MyForm::DELETE_Click);
			// 
			// DelSearchBtn
			// 
			this->DelSearchBtn->Location = System::Drawing::Point(845, 102);
			this->DelSearchBtn->Name = L"DelSearchBtn";
			this->DelSearchBtn->Size = System::Drawing::Size(100, 23);
			this->DelSearchBtn->TabIndex = 5;
			this->DelSearchBtn->Text = L"Search";
			this->DelSearchBtn->UseVisualStyleBackColor = true;
			this->DelSearchBtn->Click += gcnew System::EventHandler(this, &MyForm::DelSearchBtn_Click);
			// 
			// Delsearch
			// 
			this->Delsearch->Location = System::Drawing::Point(845, 75);
			this->Delsearch->Name = L"Delsearch";
			this->Delsearch->Size = System::Drawing::Size(100, 20);
			this->Delsearch->TabIndex = 4;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(845, 52);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(75, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"All at once";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(845, 29);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(92, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Account 1By1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel8, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel7, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel6, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel5, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(24, 28);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(794, 430);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// flowLayoutPanel8
			// 
			this->flowLayoutPanel8->Controls->Add(this->check8);
			this->flowLayoutPanel8->Controls->Add(this->label29);
			this->flowLayoutPanel8->Controls->Add(this->Dellacc8_1);
			this->flowLayoutPanel8->Controls->Add(this->label30);
			this->flowLayoutPanel8->Controls->Add(this->Dellacc8_2);
			this->flowLayoutPanel8->Controls->Add(this->label31);
			this->flowLayoutPanel8->Controls->Add(this->Dellacc8_3);
			this->flowLayoutPanel8->Controls->Add(this->label32);
			this->flowLayoutPanel8->Controls->Add(this->Dellacc8_4);
			this->flowLayoutPanel8->Location = System::Drawing::Point(597, 218);
			this->flowLayoutPanel8->Name = L"flowLayoutPanel8";
			this->flowLayoutPanel8->Size = System::Drawing::Size(181, 209);
			this->flowLayoutPanel8->TabIndex = 7;
			this->flowLayoutPanel8->Visible = false;
			// 
			// check8
			// 
			this->check8->AutoSize = true;
			this->check8->Location = System::Drawing::Point(3, 3);
			this->check8->Name = L"check8";
			this->check8->Size = System::Drawing::Size(15, 14);
			this->check8->TabIndex = 9;
			this->check8->UseVisualStyleBackColor = true;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(24, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(48, 13);
			this->label29->TabIndex = 0;
			this->label29->Text = L"Client N°";
			// 
			// Dellacc8_1
			// 
			this->Dellacc8_1->Location = System::Drawing::Point(78, 3);
			this->Dellacc8_1->Name = L"Dellacc8_1";
			this->Dellacc8_1->Size = System::Drawing::Size(100, 20);
			this->Dellacc8_1->TabIndex = 1;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(3, 26);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(60, 13);
			this->label30->TabIndex = 2;
			this->label30->Text = L"Full Name :";
			// 
			// Dellacc8_2
			// 
			this->Dellacc8_2->Location = System::Drawing::Point(69, 29);
			this->Dellacc8_2->Name = L"Dellacc8_2";
			this->Dellacc8_2->Size = System::Drawing::Size(100, 20);
			this->Dellacc8_2->TabIndex = 3;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(3, 52);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(59, 13);
			this->label31->TabIndex = 4;
			this->label31->Text = L"Profession ";
			// 
			// Dellacc8_3
			// 
			this->Dellacc8_3->Location = System::Drawing::Point(68, 55);
			this->Dellacc8_3->Name = L"Dellacc8_3";
			this->Dellacc8_3->Size = System::Drawing::Size(100, 20);
			this->Dellacc8_3->TabIndex = 5;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(3, 78);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(58, 13);
			this->label32->TabIndex = 6;
			this->label32->Text = L"Total Sold:";
			// 
			// Dellacc8_4
			// 
			this->Dellacc8_4->Location = System::Drawing::Point(67, 81);
			this->Dellacc8_4->Name = L"Dellacc8_4";
			this->Dellacc8_4->Size = System::Drawing::Size(100, 20);
			this->Dellacc8_4->TabIndex = 7;
			// 
			// flowLayoutPanel7
			// 
			this->flowLayoutPanel7->Controls->Add(this->check7);
			this->flowLayoutPanel7->Controls->Add(this->label25);
			this->flowLayoutPanel7->Controls->Add(this->Dellacc7_1);
			this->flowLayoutPanel7->Controls->Add(this->label26);
			this->flowLayoutPanel7->Controls->Add(this->Dellacc7_2);
			this->flowLayoutPanel7->Controls->Add(this->label27);
			this->flowLayoutPanel7->Controls->Add(this->Dellacc7_3);
			this->flowLayoutPanel7->Controls->Add(this->label28);
			this->flowLayoutPanel7->Controls->Add(this->Dellacc7_4);
			this->flowLayoutPanel7->Location = System::Drawing::Point(399, 218);
			this->flowLayoutPanel7->Name = L"flowLayoutPanel7";
			this->flowLayoutPanel7->Size = System::Drawing::Size(181, 209);
			this->flowLayoutPanel7->TabIndex = 6;
			this->flowLayoutPanel7->Visible = false;
			// 
			// check7
			// 
			this->check7->AutoSize = true;
			this->check7->Location = System::Drawing::Point(3, 3);
			this->check7->Name = L"check7";
			this->check7->Size = System::Drawing::Size(15, 14);
			this->check7->TabIndex = 9;
			this->check7->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(24, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(48, 13);
			this->label25->TabIndex = 0;
			this->label25->Text = L"Client N°";
			// 
			// Dellacc7_1
			// 
			this->Dellacc7_1->Location = System::Drawing::Point(78, 3);
			this->Dellacc7_1->Name = L"Dellacc7_1";
			this->Dellacc7_1->Size = System::Drawing::Size(100, 20);
			this->Dellacc7_1->TabIndex = 1;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(3, 26);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(60, 13);
			this->label26->TabIndex = 2;
			this->label26->Text = L"Full Name :";
			// 
			// Dellacc7_2
			// 
			this->Dellacc7_2->Location = System::Drawing::Point(69, 29);
			this->Dellacc7_2->Name = L"Dellacc7_2";
			this->Dellacc7_2->Size = System::Drawing::Size(100, 20);
			this->Dellacc7_2->TabIndex = 3;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(3, 52);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(59, 13);
			this->label27->TabIndex = 4;
			this->label27->Text = L"Profession ";
			// 
			// Dellacc7_3
			// 
			this->Dellacc7_3->Location = System::Drawing::Point(68, 55);
			this->Dellacc7_3->Name = L"Dellacc7_3";
			this->Dellacc7_3->Size = System::Drawing::Size(100, 20);
			this->Dellacc7_3->TabIndex = 5;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(3, 78);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(58, 13);
			this->label28->TabIndex = 6;
			this->label28->Text = L"Total Sold:";
			// 
			// Dellacc7_4
			// 
			this->Dellacc7_4->Location = System::Drawing::Point(67, 81);
			this->Dellacc7_4->Name = L"Dellacc7_4";
			this->Dellacc7_4->Size = System::Drawing::Size(100, 20);
			this->Dellacc7_4->TabIndex = 7;
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->Controls->Add(this->check6);
			this->flowLayoutPanel6->Controls->Add(this->label21);
			this->flowLayoutPanel6->Controls->Add(this->Dellacc6_1);
			this->flowLayoutPanel6->Controls->Add(this->label22);
			this->flowLayoutPanel6->Controls->Add(this->Dellacc6_2);
			this->flowLayoutPanel6->Controls->Add(this->label23);
			this->flowLayoutPanel6->Controls->Add(this->Dellacc6_3);
			this->flowLayoutPanel6->Controls->Add(this->label24);
			this->flowLayoutPanel6->Controls->Add(this->Dellacc6_4);
			this->flowLayoutPanel6->Location = System::Drawing::Point(201, 218);
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size(181, 209);
			this->flowLayoutPanel6->TabIndex = 5;
			this->flowLayoutPanel6->Visible = false;
			// 
			// check6
			// 
			this->check6->AutoSize = true;
			this->check6->Location = System::Drawing::Point(3, 3);
			this->check6->Name = L"check6";
			this->check6->Size = System::Drawing::Size(15, 14);
			this->check6->TabIndex = 9;
			this->check6->UseVisualStyleBackColor = true;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(24, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(48, 13);
			this->label21->TabIndex = 0;
			this->label21->Text = L"Client N°";
			// 
			// Dellacc6_1
			// 
			this->Dellacc6_1->Location = System::Drawing::Point(78, 3);
			this->Dellacc6_1->Name = L"Dellacc6_1";
			this->Dellacc6_1->Size = System::Drawing::Size(100, 20);
			this->Dellacc6_1->TabIndex = 1;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(3, 26);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(60, 13);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Full Name :";
			// 
			// Dellacc6_2
			// 
			this->Dellacc6_2->Location = System::Drawing::Point(69, 29);
			this->Dellacc6_2->Name = L"Dellacc6_2";
			this->Dellacc6_2->Size = System::Drawing::Size(100, 20);
			this->Dellacc6_2->TabIndex = 3;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(3, 52);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(59, 13);
			this->label23->TabIndex = 4;
			this->label23->Text = L"Profession ";
			// 
			// Dellacc6_3
			// 
			this->Dellacc6_3->Location = System::Drawing::Point(68, 55);
			this->Dellacc6_3->Name = L"Dellacc6_3";
			this->Dellacc6_3->Size = System::Drawing::Size(100, 20);
			this->Dellacc6_3->TabIndex = 5;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(3, 78);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(58, 13);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Total Sold:";
			// 
			// Dellacc6_4
			// 
			this->Dellacc6_4->Location = System::Drawing::Point(67, 81);
			this->Dellacc6_4->Name = L"Dellacc6_4";
			this->Dellacc6_4->Size = System::Drawing::Size(100, 20);
			this->Dellacc6_4->TabIndex = 7;
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->Controls->Add(this->check5);
			this->flowLayoutPanel5->Controls->Add(this->label17);
			this->flowLayoutPanel5->Controls->Add(this->Dellacc5_1);
			this->flowLayoutPanel5->Controls->Add(this->label18);
			this->flowLayoutPanel5->Controls->Add(this->Dellacc5_2);
			this->flowLayoutPanel5->Controls->Add(this->label19);
			this->flowLayoutPanel5->Controls->Add(this->Dellacc5_3);
			this->flowLayoutPanel5->Controls->Add(this->label20);
			this->flowLayoutPanel5->Controls->Add(this->Dellacc5_4);
			this->flowLayoutPanel5->Location = System::Drawing::Point(3, 218);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(181, 209);
			this->flowLayoutPanel5->TabIndex = 4;
			this->flowLayoutPanel5->Visible = false;
			// 
			// check5
			// 
			this->check5->AutoSize = true;
			this->check5->Location = System::Drawing::Point(3, 3);
			this->check5->Name = L"check5";
			this->check5->Size = System::Drawing::Size(15, 14);
			this->check5->TabIndex = 9;
			this->check5->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(24, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(48, 13);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Client N°";
			// 
			// Dellacc5_1
			// 
			this->Dellacc5_1->Location = System::Drawing::Point(78, 3);
			this->Dellacc5_1->Name = L"Dellacc5_1";
			this->Dellacc5_1->Size = System::Drawing::Size(100, 20);
			this->Dellacc5_1->TabIndex = 1;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(3, 26);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(60, 13);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Full Name :";
			// 
			// Dellacc5_2
			// 
			this->Dellacc5_2->Location = System::Drawing::Point(69, 29);
			this->Dellacc5_2->Name = L"Dellacc5_2";
			this->Dellacc5_2->Size = System::Drawing::Size(100, 20);
			this->Dellacc5_2->TabIndex = 3;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(3, 52);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(59, 13);
			this->label19->TabIndex = 4;
			this->label19->Text = L"Profession ";
			// 
			// Dellacc5_3
			// 
			this->Dellacc5_3->Location = System::Drawing::Point(68, 55);
			this->Dellacc5_3->Name = L"Dellacc5_3";
			this->Dellacc5_3->Size = System::Drawing::Size(100, 20);
			this->Dellacc5_3->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(3, 78);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(58, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Total Sold:";
			// 
			// Dellacc5_4
			// 
			this->Dellacc5_4->Location = System::Drawing::Point(67, 81);
			this->Dellacc5_4->Name = L"Dellacc5_4";
			this->Dellacc5_4->Size = System::Drawing::Size(100, 20);
			this->Dellacc5_4->TabIndex = 7;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->check4);
			this->flowLayoutPanel4->Controls->Add(this->label13);
			this->flowLayoutPanel4->Controls->Add(this->Dellacc4_1);
			this->flowLayoutPanel4->Controls->Add(this->label14);
			this->flowLayoutPanel4->Controls->Add(this->Dellacc4_2);
			this->flowLayoutPanel4->Controls->Add(this->label15);
			this->flowLayoutPanel4->Controls->Add(this->Dellacc4_3);
			this->flowLayoutPanel4->Controls->Add(this->label16);
			this->flowLayoutPanel4->Controls->Add(this->Dellacc4_4);
			this->flowLayoutPanel4->Location = System::Drawing::Point(597, 3);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(181, 209);
			this->flowLayoutPanel4->TabIndex = 3;
			this->flowLayoutPanel4->Visible = false;
			// 
			// check4
			// 
			this->check4->AutoSize = true;
			this->check4->Location = System::Drawing::Point(3, 3);
			this->check4->Name = L"check4";
			this->check4->Size = System::Drawing::Size(15, 14);
			this->check4->TabIndex = 9;
			this->check4->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(24, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Client N°";
			// 
			// Dellacc4_1
			// 
			this->Dellacc4_1->Location = System::Drawing::Point(78, 3);
			this->Dellacc4_1->Name = L"Dellacc4_1";
			this->Dellacc4_1->Size = System::Drawing::Size(100, 20);
			this->Dellacc4_1->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(60, 13);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Full Name :";
			// 
			// Dellacc4_2
			// 
			this->Dellacc4_2->Location = System::Drawing::Point(69, 29);
			this->Dellacc4_2->Name = L"Dellacc4_2";
			this->Dellacc4_2->Size = System::Drawing::Size(100, 20);
			this->Dellacc4_2->TabIndex = 3;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(3, 52);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Profession ";
			// 
			// Dellacc4_3
			// 
			this->Dellacc4_3->Location = System::Drawing::Point(68, 55);
			this->Dellacc4_3->Name = L"Dellacc4_3";
			this->Dellacc4_3->Size = System::Drawing::Size(100, 20);
			this->Dellacc4_3->TabIndex = 5;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 78);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(58, 13);
			this->label16->TabIndex = 6;
			this->label16->Text = L"Total Sold:";
			// 
			// Dellacc4_4
			// 
			this->Dellacc4_4->Location = System::Drawing::Point(67, 81);
			this->Dellacc4_4->Name = L"Dellacc4_4";
			this->Dellacc4_4->Size = System::Drawing::Size(100, 20);
			this->Dellacc4_4->TabIndex = 7;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->check3);
			this->flowLayoutPanel3->Controls->Add(this->label9);
			this->flowLayoutPanel3->Controls->Add(this->Dellacc3_1);
			this->flowLayoutPanel3->Controls->Add(this->label10);
			this->flowLayoutPanel3->Controls->Add(this->Dellacc3_2);
			this->flowLayoutPanel3->Controls->Add(this->label11);
			this->flowLayoutPanel3->Controls->Add(this->Dellacc3_3);
			this->flowLayoutPanel3->Controls->Add(this->label12);
			this->flowLayoutPanel3->Controls->Add(this->Dellacc3_4);
			this->flowLayoutPanel3->Location = System::Drawing::Point(399, 3);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(181, 209);
			this->flowLayoutPanel3->TabIndex = 2;
			this->flowLayoutPanel3->Visible = false;
			// 
			// check3
			// 
			this->check3->AutoSize = true;
			this->check3->Location = System::Drawing::Point(3, 3);
			this->check3->Name = L"check3";
			this->check3->Size = System::Drawing::Size(15, 14);
			this->check3->TabIndex = 9;
			this->check3->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(24, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Client N°";
			// 
			// Dellacc3_1
			// 
			this->Dellacc3_1->Location = System::Drawing::Point(78, 3);
			this->Dellacc3_1->Name = L"Dellacc3_1";
			this->Dellacc3_1->Size = System::Drawing::Size(100, 20);
			this->Dellacc3_1->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Full Name :";
			// 
			// Dellacc3_2
			// 
			this->Dellacc3_2->Location = System::Drawing::Point(69, 29);
			this->Dellacc3_2->Name = L"Dellacc3_2";
			this->Dellacc3_2->Size = System::Drawing::Size(100, 20);
			this->Dellacc3_2->TabIndex = 3;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 52);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 13);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Profession ";
			// 
			// Dellacc3_3
			// 
			this->Dellacc3_3->Location = System::Drawing::Point(68, 55);
			this->Dellacc3_3->Name = L"Dellacc3_3";
			this->Dellacc3_3->Size = System::Drawing::Size(100, 20);
			this->Dellacc3_3->TabIndex = 5;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 78);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 13);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Total Sold:";
			// 
			// Dellacc3_4
			// 
			this->Dellacc3_4->Location = System::Drawing::Point(67, 81);
			this->Dellacc3_4->Name = L"Dellacc3_4";
			this->Dellacc3_4->Size = System::Drawing::Size(100, 20);
			this->Dellacc3_4->TabIndex = 7;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->check2);
			this->flowLayoutPanel2->Controls->Add(this->label5);
			this->flowLayoutPanel2->Controls->Add(this->Dellacc2_1);
			this->flowLayoutPanel2->Controls->Add(this->label6);
			this->flowLayoutPanel2->Controls->Add(this->Dellacc2_2);
			this->flowLayoutPanel2->Controls->Add(this->label7);
			this->flowLayoutPanel2->Controls->Add(this->Dellacc2_3);
			this->flowLayoutPanel2->Controls->Add(this->label8);
			this->flowLayoutPanel2->Controls->Add(this->Dellacc2_4);
			this->flowLayoutPanel2->Location = System::Drawing::Point(201, 3);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(181, 209);
			this->flowLayoutPanel2->TabIndex = 1;
			this->flowLayoutPanel2->Visible = false;
			// 
			// check2
			// 
			this->check2->AutoSize = true;
			this->check2->Location = System::Drawing::Point(3, 3);
			this->check2->Name = L"check2";
			this->check2->Size = System::Drawing::Size(15, 14);
			this->check2->TabIndex = 9;
			this->check2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Client N°";
			// 
			// Dellacc2_1
			// 
			this->Dellacc2_1->Location = System::Drawing::Point(78, 3);
			this->Dellacc2_1->Name = L"Dellacc2_1";
			this->Dellacc2_1->Size = System::Drawing::Size(100, 20);
			this->Dellacc2_1->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Full Name :";
			// 
			// Dellacc2_2
			// 
			this->Dellacc2_2->Location = System::Drawing::Point(69, 29);
			this->Dellacc2_2->Name = L"Dellacc2_2";
			this->Dellacc2_2->Size = System::Drawing::Size(100, 20);
			this->Dellacc2_2->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 52);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Profession ";
			// 
			// Dellacc2_3
			// 
			this->Dellacc2_3->Location = System::Drawing::Point(68, 55);
			this->Dellacc2_3->Name = L"Dellacc2_3";
			this->Dellacc2_3->Size = System::Drawing::Size(100, 20);
			this->Dellacc2_3->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 78);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Total Sold:";
			// 
			// Dellacc2_4
			// 
			this->Dellacc2_4->Location = System::Drawing::Point(67, 81);
			this->Dellacc2_4->Name = L"Dellacc2_4";
			this->Dellacc2_4->Size = System::Drawing::Size(100, 20);
			this->Dellacc2_4->TabIndex = 7;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->check1);
			this->flowLayoutPanel1->Controls->Add(this->label1);
			this->flowLayoutPanel1->Controls->Add(this->Dellacc1_1);
			this->flowLayoutPanel1->Controls->Add(this->label2);
			this->flowLayoutPanel1->Controls->Add(this->Dellacc1_2);
			this->flowLayoutPanel1->Controls->Add(this->label3);
			this->flowLayoutPanel1->Controls->Add(this->Dellacc1_3);
			this->flowLayoutPanel1->Controls->Add(this->label4);
			this->flowLayoutPanel1->Controls->Add(this->Dellacc1_4);
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(181, 209);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Visible = false;
			// 
			// check1
			// 
			this->check1->AutoSize = true;
			this->check1->Location = System::Drawing::Point(3, 3);
			this->check1->Name = L"check1";
			this->check1->Size = System::Drawing::Size(15, 14);
			this->check1->TabIndex = 9;
			this->check1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Client N°";
			// 
			// Dellacc1_1
			// 
			this->Dellacc1_1->Location = System::Drawing::Point(78, 3);
			this->Dellacc1_1->Name = L"Dellacc1_1";
			this->Dellacc1_1->Size = System::Drawing::Size(100, 20);
			this->Dellacc1_1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Full Name :";
			// 
			// Dellacc1_2
			// 
			this->Dellacc1_2->Location = System::Drawing::Point(69, 29);
			this->Dellacc1_2->Name = L"Dellacc1_2";
			this->Dellacc1_2->Size = System::Drawing::Size(100, 20);
			this->Dellacc1_2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Profession ";
			// 
			// Dellacc1_3
			// 
			this->Dellacc1_3->Location = System::Drawing::Point(68, 55);
			this->Dellacc1_3->Name = L"Dellacc1_3";
			this->Dellacc1_3->Size = System::Drawing::Size(100, 20);
			this->Dellacc1_3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Total Sold:";
			// 
			// Dellacc1_4
			// 
			this->Dellacc1_4->Location = System::Drawing::Point(67, 81);
			this->Dellacc1_4->Name = L"Dellacc1_4";
			this->Dellacc1_4->Size = System::Drawing::Size(100, 20);
			this->Dellacc1_4->TabIndex = 7;
			// 
			// Create
			// 
			this->Create->Location = System::Drawing::Point(38, 171);
			this->Create->Name = L"Create";
			this->Create->Size = System::Drawing::Size(170, 23);
			this->Create->TabIndex = 12;
			this->Create->Text = L"Create";
			this->Create->UseVisualStyleBackColor = true;
			this->Create->Click += gcnew System::EventHandler(this, &MyForm::Create_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Location = System::Drawing::Point(38, 172);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(170, 20);
			this->dateTimePicker1->TabIndex = 13;
			this->dateTimePicker1->Visible = false;
			// 
			// addacc6
			// 
			this->addacc6->Location = System::Drawing::Point(108, 135);
			this->addacc6->Name = L"addacc6";
			this->addacc6->Size = System::Drawing::Size(100, 20);
			this->addacc6->TabIndex = 11;
			// 
			// addacc5
			// 
			this->addacc5->Enabled = false;
			this->addacc5->Location = System::Drawing::Point(108, 112);
			this->addacc5->Name = L"addacc5";
			this->addacc5->Size = System::Drawing::Size(100, 20);
			this->addacc5->TabIndex = 10;
			// 
			// addacc4
			// 
			this->addacc4->Location = System::Drawing::Point(108, 90);
			this->addacc4->Name = L"addacc4";
			this->addacc4->Size = System::Drawing::Size(100, 20);
			this->addacc4->TabIndex = 9;
			// 
			// addacc3
			// 
			this->addacc3->Location = System::Drawing::Point(108, 68);
			this->addacc3->Name = L"addacc3";
			this->addacc3->Size = System::Drawing::Size(100, 20);
			this->addacc3->TabIndex = 8;
			// 
			// addacc2
			// 
			this->addacc2->Location = System::Drawing::Point(108, 45);
			this->addacc2->Name = L"addacc2";
			this->addacc2->Size = System::Drawing::Size(100, 20);
			this->addacc2->TabIndex = 7;
			// 
			// addacc1
			// 
			this->addacc1->Location = System::Drawing::Point(108, 22);
			this->addacc1->Name = L"addacc1";
			this->addacc1->Size = System::Drawing::Size(100, 20);
			this->addacc1->TabIndex = 6;
			// 
			// addlabel6
			// 
			this->addlabel6->AutoSize = true;
			this->addlabel6->Location = System::Drawing::Point(35, 138);
			this->addlabel6->Name = L"addlabel6";
			this->addlabel6->Size = System::Drawing::Size(71, 13);
			this->addlabel6->TabIndex = 5;
			this->addlabel6->Text = L"First Deposit :";
			// 
			// addlabel5
			// 
			this->addlabel5->AutoSize = true;
			this->addlabel5->Location = System::Drawing::Point(35, 115);
			this->addlabel5->Name = L"addlabel5";
			this->addlabel5->Size = System::Drawing::Size(74, 13);
			this->addlabel5->TabIndex = 4;
			this->addlabel5->Text = L"Account\'s ID :";
			// 
			// addlabel4
			// 
			this->addlabel4->AutoSize = true;
			this->addlabel4->Location = System::Drawing::Point(35, 93);
			this->addlabel4->Name = L"addlabel4";
			this->addlabel4->Size = System::Drawing::Size(59, 13);
			this->addlabel4->TabIndex = 3;
			this->addlabel4->Text = L"Phone N° :";
			// 
			// addlabel3
			// 
			this->addlabel3->AutoSize = true;
			this->addlabel3->Location = System::Drawing::Point(35, 71);
			this->addlabel3->Name = L"addlabel3";
			this->addlabel3->Size = System::Drawing::Size(62, 13);
			this->addlabel3->TabIndex = 2;
			this->addlabel3->Text = L"Profession :";
			// 
			// addlabel2
			// 
			this->addlabel2->AutoSize = true;
			this->addlabel2->Location = System::Drawing::Point(35, 48);
			this->addlabel2->Name = L"addlabel2";
			this->addlabel2->Size = System::Drawing::Size(64, 13);
			this->addlabel2->TabIndex = 1;
			this->addlabel2->Text = L"Last Name :";
			// 
			// addlabel1
			// 
			this->addlabel1->AutoSize = true;
			this->addlabel1->Location = System::Drawing::Point(35, 25);
			this->addlabel1->Name = L"addlabel1";
			this->addlabel1->Size = System::Drawing::Size(41, 13);
			this->addlabel1->TabIndex = 0;
			this->addlabel1->Text = L"Name :";
			// 
			// page3
			// 
			this->page3->Controls->Add(this->ACCADD);
			this->page3->Location = System::Drawing::Point(4, 22);
			this->page3->Name = L"page3";
			this->page3->Size = System::Drawing::Size(964, 502);
			this->page3->TabIndex = 2;
			this->page3->Text = L"account manip";
			this->page3->UseVisualStyleBackColor = true;
			// 
			// ACCADD
			// 
			this->ACCADD->Controls->Add(this->DelAC);
			this->ACCADD->Controls->Add(this->CreateACC);
			this->ACCADD->Controls->Add(this->accadd3);
			this->ACCADD->Controls->Add(this->accadd2);
			this->ACCADD->Controls->Add(this->accadd1);
			this->ACCADD->Controls->Add(this->label35);
			this->ACCADD->Controls->Add(this->label34);
			this->ACCADD->Controls->Add(this->label33);
			this->ACCADD->Enabled = false;
			this->ACCADD->Location = System::Drawing::Point(-4, 0);
			this->ACCADD->Name = L"ACCADD";
			this->ACCADD->Size = System::Drawing::Size(965, 506);
			this->ACCADD->TabIndex = 0;
			this->ACCADD->TabStop = false;
			this->ACCADD->Visible = false;
			// 
			// DelAC
			// 
			this->DelAC->Controls->Add(this->Delacc2);
			this->DelAC->Controls->Add(this->button1);
			this->DelAC->Controls->Add(this->serchdata);
			this->DelAC->Controls->Add(this->tableLayoutPanel2);
			this->DelAC->Location = System::Drawing::Point(4, 0);
			this->DelAC->Name = L"DelAC";
			this->DelAC->Size = System::Drawing::Size(965, 506);
			this->DelAC->TabIndex = 7;
			this->DelAC->TabStop = false;
			this->DelAC->Enter += gcnew System::EventHandler(this, &MyForm::DelAC_Enter);
			// 
			// Delacc2
			// 
			this->Delacc2->Location = System::Drawing::Point(843, 442);
			this->Delacc2->Name = L"Delacc2";
			this->Delacc2->Size = System::Drawing::Size(100, 23);
			this->Delacc2->TabIndex = 11;
			this->Delacc2->Text = L"Delete";
			this->Delacc2->UseVisualStyleBackColor = true;
			this->Delacc2->Click += gcnew System::EventHandler(this, &MyForm::Delacc2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(843, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// serchdata
			// 
			this->serchdata->Location = System::Drawing::Point(843, 38);
			this->serchdata->Name = L"serchdata";
			this->serchdata->Size = System::Drawing::Size(100, 20);
			this->serchdata->TabIndex = 9;
			this->serchdata->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel2->Controls->Add(this->addaccfl6, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->addaccfl5, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->addaccfl4, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->addaccfl3, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->addaccfl2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->addaccfl1, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(22, 38);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(794, 430);
			this->tableLayoutPanel2->TabIndex = 6;
			// 
			// addaccfl6
			// 
			this->addaccfl6->Controls->Add(this->dlcheckBox6);
			this->addaccfl6->Controls->Add(this->label40);
			this->addaccfl6->Controls->Add(this->delacc6_1);
			this->addaccfl6->Controls->Add(this->label43);
			this->addaccfl6->Controls->Add(this->delacc6_3);
			this->addaccfl6->Enabled = false;
			this->addaccfl6->Location = System::Drawing::Point(399, 218);
			this->addaccfl6->Name = L"addaccfl6";
			this->addaccfl6->Size = System::Drawing::Size(181, 209);
			this->addaccfl6->TabIndex = 6;
			this->addaccfl6->Visible = false;
			// 
			// dlcheckBox6
			// 
			this->dlcheckBox6->AutoSize = true;
			this->dlcheckBox6->Location = System::Drawing::Point(3, 3);
			this->dlcheckBox6->Name = L"dlcheckBox6";
			this->dlcheckBox6->Size = System::Drawing::Size(15, 14);
			this->dlcheckBox6->TabIndex = 9;
			this->dlcheckBox6->UseVisualStyleBackColor = true;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(24, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(47, 13);
			this->label40->TabIndex = 0;
			this->label40->Text = L"Account";
			// 
			// delacc6_1
			// 
			this->delacc6_1->Location = System::Drawing::Point(77, 3);
			this->delacc6_1->Name = L"delacc6_1";
			this->delacc6_1->Size = System::Drawing::Size(100, 20);
			this->delacc6_1->TabIndex = 1;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(3, 26);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(58, 13);
			this->label43->TabIndex = 6;
			this->label43->Text = L"Total Sold:";
			// 
			// delacc6_3
			// 
			this->delacc6_3->Location = System::Drawing::Point(67, 29);
			this->delacc6_3->Name = L"delacc6_3";
			this->delacc6_3->Size = System::Drawing::Size(100, 20);
			this->delacc6_3->TabIndex = 7;
			// 
			// addaccfl5
			// 
			this->addaccfl5->Controls->Add(this->dlcheckBox5);
			this->addaccfl5->Controls->Add(this->label44);
			this->addaccfl5->Controls->Add(this->delacc5_1);
			this->addaccfl5->Controls->Add(this->label47);
			this->addaccfl5->Controls->Add(this->delacc5_3);
			this->addaccfl5->Enabled = false;
			this->addaccfl5->Location = System::Drawing::Point(201, 218);
			this->addaccfl5->Name = L"addaccfl5";
			this->addaccfl5->Size = System::Drawing::Size(181, 209);
			this->addaccfl5->TabIndex = 5;
			this->addaccfl5->Visible = false;
			// 
			// dlcheckBox5
			// 
			this->dlcheckBox5->AutoSize = true;
			this->dlcheckBox5->Location = System::Drawing::Point(3, 3);
			this->dlcheckBox5->Name = L"dlcheckBox5";
			this->dlcheckBox5->Size = System::Drawing::Size(15, 14);
			this->dlcheckBox5->TabIndex = 9;
			this->dlcheckBox5->UseVisualStyleBackColor = true;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(24, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(47, 13);
			this->label44->TabIndex = 0;
			this->label44->Text = L"Account";
			// 
			// delacc5_1
			// 
			this->delacc5_1->Location = System::Drawing::Point(77, 3);
			this->delacc5_1->Name = L"delacc5_1";
			this->delacc5_1->Size = System::Drawing::Size(100, 20);
			this->delacc5_1->TabIndex = 1;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(3, 26);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(58, 13);
			this->label47->TabIndex = 6;
			this->label47->Text = L"Total Sold:";
			// 
			// delacc5_3
			// 
			this->delacc5_3->Location = System::Drawing::Point(67, 29);
			this->delacc5_3->Name = L"delacc5_3";
			this->delacc5_3->Size = System::Drawing::Size(100, 20);
			this->delacc5_3->TabIndex = 7;
			// 
			// addaccfl4
			// 
			this->addaccfl4->Controls->Add(this->dlcheckBox4);
			this->addaccfl4->Controls->Add(this->label52);
			this->addaccfl4->Controls->Add(this->delacc4_1);
			this->addaccfl4->Controls->Add(this->label55);
			this->addaccfl4->Controls->Add(this->delacc4_3);
			this->addaccfl4->Enabled = false;
			this->addaccfl4->Location = System::Drawing::Point(597, 3);
			this->addaccfl4->Name = L"addaccfl4";
			this->addaccfl4->Size = System::Drawing::Size(181, 209);
			this->addaccfl4->TabIndex = 3;
			this->addaccfl4->Visible = false;
			// 
			// dlcheckBox4
			// 
			this->dlcheckBox4->AutoSize = true;
			this->dlcheckBox4->Location = System::Drawing::Point(3, 3);
			this->dlcheckBox4->Name = L"dlcheckBox4";
			this->dlcheckBox4->Size = System::Drawing::Size(15, 14);
			this->dlcheckBox4->TabIndex = 9;
			this->dlcheckBox4->UseVisualStyleBackColor = true;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(24, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(47, 13);
			this->label52->TabIndex = 0;
			this->label52->Text = L"Account";
			// 
			// delacc4_1
			// 
			this->delacc4_1->Location = System::Drawing::Point(77, 3);
			this->delacc4_1->Name = L"delacc4_1";
			this->delacc4_1->Size = System::Drawing::Size(100, 20);
			this->delacc4_1->TabIndex = 1;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(3, 26);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(58, 13);
			this->label55->TabIndex = 6;
			this->label55->Text = L"Total Sold:";
			// 
			// delacc4_3
			// 
			this->delacc4_3->Location = System::Drawing::Point(67, 29);
			this->delacc4_3->Name = L"delacc4_3";
			this->delacc4_3->Size = System::Drawing::Size(100, 20);
			this->delacc4_3->TabIndex = 7;
			// 
			// addaccfl3
			// 
			this->addaccfl3->Controls->Add(this->dlcheckBox3);
			this->addaccfl3->Controls->Add(this->label56);
			this->addaccfl3->Controls->Add(this->delacc3_1);
			this->addaccfl3->Controls->Add(this->label59);
			this->addaccfl3->Controls->Add(this->delacc3_3);
			this->addaccfl3->Enabled = false;
			this->addaccfl3->Location = System::Drawing::Point(399, 3);
			this->addaccfl3->Name = L"addaccfl3";
			this->addaccfl3->Size = System::Drawing::Size(181, 209);
			this->addaccfl3->TabIndex = 2;
			this->addaccfl3->Visible = false;
			// 
			// dlcheckBox3
			// 
			this->dlcheckBox3->AutoSize = true;
			this->dlcheckBox3->Location = System::Drawing::Point(3, 3);
			this->dlcheckBox3->Name = L"dlcheckBox3";
			this->dlcheckBox3->Size = System::Drawing::Size(15, 14);
			this->dlcheckBox3->TabIndex = 9;
			this->dlcheckBox3->UseVisualStyleBackColor = true;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(24, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(47, 13);
			this->label56->TabIndex = 0;
			this->label56->Text = L"Account";
			// 
			// delacc3_1
			// 
			this->delacc3_1->Location = System::Drawing::Point(77, 3);
			this->delacc3_1->Name = L"delacc3_1";
			this->delacc3_1->Size = System::Drawing::Size(100, 20);
			this->delacc3_1->TabIndex = 1;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(3, 26);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(58, 13);
			this->label59->TabIndex = 6;
			this->label59->Text = L"Total Sold:";
			// 
			// delacc3_3
			// 
			this->delacc3_3->Location = System::Drawing::Point(67, 29);
			this->delacc3_3->Name = L"delacc3_3";
			this->delacc3_3->Size = System::Drawing::Size(100, 20);
			this->delacc3_3->TabIndex = 7;
			// 
			// addaccfl2
			// 
			this->addaccfl2->Controls->Add(this->dlcheckBox2);
			this->addaccfl2->Controls->Add(this->label60);
			this->addaccfl2->Controls->Add(this->delacc2_1);
			this->addaccfl2->Controls->Add(this->label63);
			this->addaccfl2->Controls->Add(this->delacc2_3);
			this->addaccfl2->Enabled = false;
			this->addaccfl2->Location = System::Drawing::Point(201, 3);
			this->addaccfl2->Name = L"addaccfl2";
			this->addaccfl2->Size = System::Drawing::Size(181, 209);
			this->addaccfl2->TabIndex = 1;
			this->addaccfl2->Visible = false;
			// 
			// dlcheckBox2
			// 
			this->dlcheckBox2->AutoSize = true;
			this->dlcheckBox2->Location = System::Drawing::Point(3, 3);
			this->dlcheckBox2->Name = L"dlcheckBox2";
			this->dlcheckBox2->Size = System::Drawing::Size(15, 14);
			this->dlcheckBox2->TabIndex = 9;
			this->dlcheckBox2->UseVisualStyleBackColor = true;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(24, 0);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(47, 13);
			this->label60->TabIndex = 0;
			this->label60->Text = L"Account";
			// 
			// delacc2_1
			// 
			this->delacc2_1->Location = System::Drawing::Point(77, 3);
			this->delacc2_1->Name = L"delacc2_1";
			this->delacc2_1->Size = System::Drawing::Size(100, 20);
			this->delacc2_1->TabIndex = 1;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(3, 26);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(58, 13);
			this->label63->TabIndex = 6;
			this->label63->Text = L"Total Sold:";
			// 
			// delacc2_3
			// 
			this->delacc2_3->Location = System::Drawing::Point(67, 29);
			this->delacc2_3->Name = L"delacc2_3";
			this->delacc2_3->Size = System::Drawing::Size(100, 20);
			this->delacc2_3->TabIndex = 7;
			// 
			// addaccfl1
			// 
			this->addaccfl1->Controls->Add(this->dlcheckBox1);
			this->addaccfl1->Controls->Add(this->label64);
			this->addaccfl1->Controls->Add(this->delacc1_1);
			this->addaccfl1->Controls->Add(this->label67);
			this->addaccfl1->Controls->Add(this->delacc1_3);
			this->addaccfl1->Enabled = false;
			this->addaccfl1->Location = System::Drawing::Point(3, 3);
			this->addaccfl1->Name = L"addaccfl1";
			this->addaccfl1->Size = System::Drawing::Size(181, 209);
			this->addaccfl1->TabIndex = 0;
			this->addaccfl1->Visible = false;
			// 
			// dlcheckBox1
			// 
			this->dlcheckBox1->AutoSize = true;
			this->dlcheckBox1->Location = System::Drawing::Point(3, 3);
			this->dlcheckBox1->Name = L"dlcheckBox1";
			this->dlcheckBox1->Size = System::Drawing::Size(15, 14);
			this->dlcheckBox1->TabIndex = 9;
			this->dlcheckBox1->UseVisualStyleBackColor = true;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(24, 0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(47, 13);
			this->label64->TabIndex = 0;
			this->label64->Text = L"Account";
			// 
			// delacc1_1
			// 
			this->delacc1_1->Location = System::Drawing::Point(77, 3);
			this->delacc1_1->Name = L"delacc1_1";
			this->delacc1_1->Size = System::Drawing::Size(100, 20);
			this->delacc1_1->TabIndex = 1;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(3, 26);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(58, 13);
			this->label67->TabIndex = 6;
			this->label67->Text = L"Total Sold:";
			// 
			// delacc1_3
			// 
			this->delacc1_3->Location = System::Drawing::Point(67, 29);
			this->delacc1_3->Name = L"delacc1_3";
			this->delacc1_3->Size = System::Drawing::Size(100, 20);
			this->delacc1_3->TabIndex = 7;
			// 
			// CreateACC
			// 
			this->CreateACC->Location = System::Drawing::Point(72, 110);
			this->CreateACC->Name = L"CreateACC";
			this->CreateACC->Size = System::Drawing::Size(179, 23);
			this->CreateACC->TabIndex = 6;
			this->CreateACC->Text = L"Create";
			this->CreateACC->UseVisualStyleBackColor = true;
			this->CreateACC->Click += gcnew System::EventHandler(this, &MyForm::CreateACC_Click);
			// 
			// accadd3
			// 
			this->accadd3->Enabled = false;
			this->accadd3->Location = System::Drawing::Point(151, 85);
			this->accadd3->Name = L"accadd3";
			this->accadd3->Size = System::Drawing::Size(100, 20);
			this->accadd3->TabIndex = 5;
			// 
			// accadd2
			// 
			this->accadd2->Location = System::Drawing::Point(151, 63);
			this->accadd2->Name = L"accadd2";
			this->accadd2->Size = System::Drawing::Size(100, 20);
			this->accadd2->TabIndex = 4;
			// 
			// accadd1
			// 
			this->accadd1->Location = System::Drawing::Point(151, 40);
			this->accadd1->Name = L"accadd1";
			this->accadd1->Size = System::Drawing::Size(100, 20);
			this->accadd1->TabIndex = 3;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(69, 91);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(61, 13);
			this->label35->TabIndex = 2;
			this->label35->Text = L"Compte Id :";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(69, 66);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(81, 13);
			this->label34->TabIndex = 1;
			this->label34->Text = L"Solde de base :";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(69, 40);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(62, 13);
			this->label33->TabIndex = 0;
			this->label33->Text = L"Account Id:";
			// 
			// page4
			// 
			this->page4->Controls->Add(this->splitContainer2);
			this->page4->Location = System::Drawing::Point(4, 22);
			this->page4->Name = L"page4";
			this->page4->Size = System::Drawing::Size(964, 502);
			this->page4->TabIndex = 3;
			this->page4->Text = L"Operations";
			this->page4->UseVisualStyleBackColor = true;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->Transfre);
			this->splitContainer2->Panel1->Controls->Add(this->Withraw);
			this->splitContainer2->Panel1->Controls->Add(this->Deposit);
			this->splitContainer2->Panel1MinSize = 750;
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->label39);
			this->splitContainer2->Panel2->Controls->Add(this->label38);
			this->splitContainer2->Panel2->Controls->Add(this->opsearch2);
			this->splitContainer2->Panel2->Controls->Add(this->splitter2);
			this->splitContainer2->Panel2->Controls->Add(this->opsrchbtn);
			this->splitContainer2->Panel2->Controls->Add(this->opsearch);
			this->splitContainer2->Panel2MinSize = 75;
			this->splitContainer2->Size = System::Drawing::Size(964, 502);
			this->splitContainer2->SplitterDistance = 750;
			this->splitContainer2->TabIndex = 0;
			// 
			// Transfre
			// 
			this->Transfre->Controls->Add(this->opconfirm);
			this->Transfre->Controls->Add(this->TransferI_T);
			this->Transfre->Controls->Add(this->label41);
			this->Transfre->Location = System::Drawing::Point(1, 3);
			this->Transfre->Name = L"Transfre";
			this->Transfre->Size = System::Drawing::Size(758, 500);
			this->Transfre->TabIndex = 4;
			this->Transfre->TabStop = false;
			this->Transfre->Text = L"Transfer";
			this->Transfre->Visible = false;
			// 
			// opconfirm
			// 
			this->opconfirm->Location = System::Drawing::Point(36, 80);
			this->opconfirm->Name = L"opconfirm";
			this->opconfirm->Size = System::Drawing::Size(154, 23);
			this->opconfirm->TabIndex = 2;
			this->opconfirm->Text = L"Confirm";
			this->opconfirm->UseVisualStyleBackColor = true;
			this->opconfirm->Click += gcnew System::EventHandler(this, &MyForm::opconfirm_Click);
			// 
			// TransferI_T
			// 
			this->TransferI_T->Location = System::Drawing::Point(39, 54);
			this->TransferI_T->Name = L"TransferI_T";
			this->TransferI_T->Size = System::Drawing::Size(151, 20);
			this->TransferI_T->TabIndex = 1;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(36, 35);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(151, 13);
			this->label41->TabIndex = 0;
			this->label41->Text = L"How much you wanna transfer";
			// 
			// Withraw
			// 
			this->Withraw->Controls->Add(this->WithrawConf);
			this->Withraw->Controls->Add(this->Withrout);
			this->Withraw->Controls->Add(this->label37);
			this->Withraw->Location = System::Drawing::Point(0, 3);
			this->Withraw->Name = L"Withraw";
			this->Withraw->Size = System::Drawing::Size(758, 499);
			this->Withraw->TabIndex = 2;
			this->Withraw->TabStop = false;
			this->Withraw->Text = L"Withraw";
			this->Withraw->Visible = false;
			// 
			// WithrawConf
			// 
			this->WithrawConf->Location = System::Drawing::Point(39, 80);
			this->WithrawConf->Name = L"WithrawConf";
			this->WithrawConf->Size = System::Drawing::Size(257, 23);
			this->WithrawConf->TabIndex = 2;
			this->WithrawConf->Text = L"Confirm";
			this->WithrawConf->UseVisualStyleBackColor = true;
			this->WithrawConf->Click += gcnew System::EventHandler(this, &MyForm::WithrawConf_Click);
			// 
			// Withrout
			// 
			this->Withrout->Location = System::Drawing::Point(196, 45);
			this->Withrout->Name = L"Withrout";
			this->Withrout->Size = System::Drawing::Size(100, 20);
			this->Withrout->TabIndex = 1;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(36, 48);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(154, 13);
			this->label37->TabIndex = 0;
			this->label37->Text = L"how much you wanna deposit :";
			// 
			// Deposit
			// 
			this->Deposit->Controls->Add(this->DeposConfirm);
			this->Deposit->Controls->Add(this->deposin);
			this->Deposit->Controls->Add(this->label36);
			this->Deposit->Location = System::Drawing::Point(3, 3);
			this->Deposit->Name = L"Deposit";
			this->Deposit->Size = System::Drawing::Size(758, 496);
			this->Deposit->TabIndex = 0;
			this->Deposit->TabStop = false;
			this->Deposit->Text = L"deposit";
			this->Deposit->Visible = false;
			// 
			// DeposConfirm
			// 
			this->DeposConfirm->Location = System::Drawing::Point(36, 76);
			this->DeposConfirm->Name = L"DeposConfirm";
			this->DeposConfirm->Size = System::Drawing::Size(260, 23);
			this->DeposConfirm->TabIndex = 2;
			this->DeposConfirm->Text = L"Confirm";
			this->DeposConfirm->UseVisualStyleBackColor = true;
			this->DeposConfirm->Click += gcnew System::EventHandler(this, &MyForm::DeposConfirm_Click);
			// 
			// deposin
			// 
			this->deposin->Location = System::Drawing::Point(196, 45);
			this->deposin->Name = L"deposin";
			this->deposin->Size = System::Drawing::Size(100, 20);
			this->deposin->TabIndex = 1;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(36, 48);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(154, 13);
			this->label36->TabIndex = 0;
			this->label36->Text = L"how much you wanna deposit :";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(12, 67);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(118, 13);
			this->label39->TabIndex = 4;
			this->label39->Text = L"Receiver\'s Account Id :";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(12, 9);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(65, 13);
			this->label38->TabIndex = 3;
			this->label38->Text = L"Account Id :";
			// 
			// opsearch2
			// 
			this->opsearch2->Location = System::Drawing::Point(15, 83);
			this->opsearch2->Name = L"opsearch2";
			this->opsearch2->Size = System::Drawing::Size(167, 20);
			this->opsearch2->TabIndex = 2;
			// 
			// splitter2
			// 
			this->splitter2->Location = System::Drawing::Point(0, 0);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(3, 502);
			this->splitter2->TabIndex = 0;
			this->splitter2->TabStop = false;
			// 
			// opsrchbtn
			// 
			this->opsrchbtn->Location = System::Drawing::Point(15, 109);
			this->opsrchbtn->Name = L"opsrchbtn";
			this->opsrchbtn->Size = System::Drawing::Size(167, 23);
			this->opsrchbtn->TabIndex = 1;
			this->opsrchbtn->Text = L"Search";
			this->opsrchbtn->UseVisualStyleBackColor = true;
			this->opsrchbtn->Click += gcnew System::EventHandler(this, &MyForm::opsrchbtn_Click);
			// 
			// opsearch
			// 
			this->opsearch->Location = System::Drawing::Point(15, 25);
			this->opsearch->Name = L"opsearch";
			this->opsearch->Size = System::Drawing::Size(167, 20);
			this->opsearch->TabIndex = 0;
			// 
			// page5
			// 
			this->page5->Controls->Add(this->addadmn);
			this->page5->Controls->Add(this->passchange);
			this->page5->Location = System::Drawing::Point(4, 22);
			this->page5->Name = L"page5";
			this->page5->Size = System::Drawing::Size(964, 502);
			this->page5->TabIndex = 4;
			this->page5->Text = L"Settings";
			this->page5->UseVisualStyleBackColor = true;
			// 
			// addadmn
			// 
			this->addadmn->Controls->Add(this->psscnf1);
			this->addadmn->Controls->Add(this->admnpss1);
			this->addadmn->Controls->Add(this->admnm1);
			this->addadmn->Controls->Add(this->label54);
			this->addadmn->Controls->Add(this->label53);
			this->addadmn->Controls->Add(this->label51);
			this->addadmn->Controls->Add(this->admncrt1);
			this->addadmn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addadmn->Location = System::Drawing::Point(3, 8);
			this->addadmn->Name = L"addadmn";
			this->addadmn->Size = System::Drawing::Size(336, 343);
			this->addadmn->TabIndex = 2;
			this->addadmn->TabStop = false;
			this->addadmn->Visible = false;
			// 
			// psscnf1
			// 
			this->psscnf1->Location = System::Drawing::Point(222, 71);
			this->psscnf1->Name = L"psscnf1";
			this->psscnf1->Size = System::Drawing::Size(100, 20);
			this->psscnf1->TabIndex = 7;
			// 
			// admnpss1
			// 
			this->admnpss1->Location = System::Drawing::Point(222, 50);
			this->admnpss1->Name = L"admnpss1";
			this->admnpss1->Size = System::Drawing::Size(100, 20);
			this->admnpss1->TabIndex = 6;
			// 
			// admnm1
			// 
			this->admnm1->Location = System::Drawing::Point(222, 29);
			this->admnm1->Name = L"admnm1";
			this->admnm1->Size = System::Drawing::Size(100, 20);
			this->admnm1->TabIndex = 5;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(6, 73);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(119, 13);
			this->label54->TabIndex = 4;
			this->label54->Text = L"Password confirmation :";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(6, 53);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(59, 13);
			this->label53->TabIndex = 3;
			this->label53->Text = L"Password :";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(6, 32);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(58, 13);
			this->label51->TabIndex = 2;
			this->label51->Text = L"Full name :";
			// 
			// admncrt1
			// 
			this->admncrt1->Location = System::Drawing::Point(222, 97);
			this->admncrt1->Name = L"admncrt1";
			this->admncrt1->Size = System::Drawing::Size(100, 23);
			this->admncrt1->TabIndex = 1;
			this->admncrt1->Text = L"Create account";
			this->admncrt1->UseVisualStyleBackColor = true;
			this->admncrt1->Click += gcnew System::EventHandler(this, &MyForm::admncrt1_Click);
			// 
			// passchange
			// 
			this->passchange->Controls->Add(this->button3);
			this->passchange->Controls->Add(this->rnewpass);
			this->passchange->Controls->Add(this->newpass);
			this->passchange->Controls->Add(this->oldpass);
			this->passchange->Controls->Add(this->label50);
			this->passchange->Controls->Add(this->label49);
			this->passchange->Controls->Add(this->label48);
			this->passchange->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->passchange->Location = System::Drawing::Point(3, 8);
			this->passchange->Name = L"passchange";
			this->passchange->Size = System::Drawing::Size(336, 343);
			this->passchange->TabIndex = 1;
			this->passchange->TabStop = false;
			this->passchange->Text = L"change pass";
			this->passchange->Visible = false;
			this->passchange->Enter += gcnew System::EventHandler(this, &MyForm::passchange_Enter);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(178, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// rnewpass
			// 
			this->rnewpass->Location = System::Drawing::Point(178, 85);
			this->rnewpass->Name = L"rnewpass";
			this->rnewpass->Size = System::Drawing::Size(100, 20);
			this->rnewpass->TabIndex = 5;
			// 
			// newpass
			// 
			this->newpass->Location = System::Drawing::Point(178, 58);
			this->newpass->Name = L"newpass";
			this->newpass->Size = System::Drawing::Size(100, 20);
			this->newpass->TabIndex = 4;
			// 
			// oldpass
			// 
			this->oldpass->Location = System::Drawing::Point(178, 30);
			this->oldpass->Name = L"oldpass";
			this->oldpass->Size = System::Drawing::Size(100, 20);
			this->oldpass->TabIndex = 3;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(38, 92);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(140, 13);
			this->label50->TabIndex = 2;
			this->label50->Text = L"Reenter the new password :";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(38, 62);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(109, 13);
			this->label49->TabIndex = 1;
			this->label49->Text = L"Enter new password :";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(38, 33);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(105, 13);
			this->label48->TabIndex = 0;
			this->label48->Text = L"Enter Old password :";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->clientToolStripMenuItem,
					this->accountsToolStripMenuItem, this->operationsToolStripMenuItem, this->settingsToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(3, 16);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(978, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// clientToolStripMenuItem
			// 
			this->clientToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addClientToolStripMenuItem,
					this->removeClientToolStripMenuItem
			});
			this->clientToolStripMenuItem->Name = L"clientToolStripMenuItem";
			this->clientToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->clientToolStripMenuItem->Text = L"Client";
			this->clientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clientToolStripMenuItem_Click);
			// 
			// addClientToolStripMenuItem
			// 
			this->addClientToolStripMenuItem->Name = L"addClientToolStripMenuItem";
			this->addClientToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->addClientToolStripMenuItem->Text = L"Add client";
			this->addClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addClientToolStripMenuItem_Click);
			// 
			// removeClientToolStripMenuItem
			// 
			this->removeClientToolStripMenuItem->Name = L"removeClientToolStripMenuItem";
			this->removeClientToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->removeClientToolStripMenuItem->Text = L"Remove Client";
			this->removeClientToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::removeClientToolStripMenuItem_Click);
			// 
			// accountsToolStripMenuItem
			// 
			this->accountsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addAccountToolStripMenuItem,
					this->removeAccountToolStripMenuItem
			});
			this->accountsToolStripMenuItem->Name = L"accountsToolStripMenuItem";
			this->accountsToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->accountsToolStripMenuItem->Text = L"Accounts";
			this->accountsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::accountsToolStripMenuItem_Click);
			// 
			// addAccountToolStripMenuItem
			// 
			this->addAccountToolStripMenuItem->Name = L"addAccountToolStripMenuItem";
			this->addAccountToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->addAccountToolStripMenuItem->Text = L"Add account";
			this->addAccountToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addAccountToolStripMenuItem_Click);
			// 
			// removeAccountToolStripMenuItem
			// 
			this->removeAccountToolStripMenuItem->Name = L"removeAccountToolStripMenuItem";
			this->removeAccountToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->removeAccountToolStripMenuItem->Text = L"Remove account";
			this->removeAccountToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::removeAccountToolStripMenuItem_Click);
			// 
			// operationsToolStripMenuItem
			// 
			this->operationsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->depositToolStripMenuItem,
					this->withrawToolStripMenuItem, this->transferToolStripMenuItem
			});
			this->operationsToolStripMenuItem->Name = L"operationsToolStripMenuItem";
			this->operationsToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->operationsToolStripMenuItem->Text = L"Operations";
			this->operationsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::operationsToolStripMenuItem_Click);
			// 
			// depositToolStripMenuItem
			// 
			this->depositToolStripMenuItem->Name = L"depositToolStripMenuItem";
			this->depositToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->depositToolStripMenuItem->Text = L"Deposit";
			this->depositToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::depositToolStripMenuItem_Click);
			// 
			// withrawToolStripMenuItem
			// 
			this->withrawToolStripMenuItem->Name = L"withrawToolStripMenuItem";
			this->withrawToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->withrawToolStripMenuItem->Text = L"Withraw";
			this->withrawToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::withrawToolStripMenuItem_Click);
			// 
			// transferToolStripMenuItem
			// 
			this->transferToolStripMenuItem->Name = L"transferToolStripMenuItem";
			this->transferToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->transferToolStripMenuItem->Text = L"Transfer";
			this->transferToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::transferToolStripMenuItem_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addAdmnAccountToolStripMenuItem,
					this->changePasswordToolStripMenuItem
			});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::settingsToolStripMenuItem_Click);
			// 
			// addAdmnAccountToolStripMenuItem
			// 
			this->addAdmnAccountToolStripMenuItem->Name = L"addAdmnAccountToolStripMenuItem";
			this->addAdmnAccountToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->addAdmnAccountToolStripMenuItem->Text = L"Add Admn account";
			this->addAdmnAccountToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addAdmnAccountToolStripMenuItem_Click);
			// 
			// changePasswordToolStripMenuItem
			// 
			this->changePasswordToolStripMenuItem->Name = L"changePasswordToolStripMenuItem";
			this->changePasswordToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->changePasswordToolStripMenuItem->Text = L"Change Password";
			this->changePasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::changePasswordToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->heeeeeeelpToolStripMenuItem,
					this->logOutToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// heeeeeeelpToolStripMenuItem
			// 
			this->heeeeeeelpToolStripMenuItem->Name = L"heeeeeeelpToolStripMenuItem";
			this->heeeeeeelpToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->heeeeeeelpToolStripMenuItem->Text = L"Heeeeeeelp";
			// 
			// logOutToolStripMenuItem
			// 
			this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			this->logOutToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->logOutToolStripMenuItem->Text = L"Log-Out";
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::logOutToolStripMenuItem_Click);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(19, 31);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(143, 13);
			this->label42->TabIndex = 0;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(19, 56);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(59, 13);
			this->label45->TabIndex = 1;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(19, 80);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(101, 13);
			this->label46->TabIndex = 2;
			// 
			// admnm
			// 
			this->admnm->Location = System::Drawing::Point(0, 0);
			this->admnm->Name = L"admnm";
			this->admnm->Size = System::Drawing::Size(100, 20);
			this->admnm->TabIndex = 0;
			// 
			// admnpss
			// 
			this->admnpss->Location = System::Drawing::Point(0, 0);
			this->admnpss->Name = L"admnpss";
			this->admnpss->Size = System::Drawing::Size(100, 20);
			this->admnpss->TabIndex = 0;
			// 
			// psscnf
			// 
			this->psscnf->Location = System::Drawing::Point(0, 0);
			this->psscnf->Name = L"psscnf";
			this->psscnf->Size = System::Drawing::Size(100, 20);
			this->psscnf->TabIndex = 0;
			// 
			// admncrt
			// 
			this->admncrt->Location = System::Drawing::Point(0, 0);
			this->admncrt->Name = L"admncrt";
			this->admncrt->Size = System::Drawing::Size(75, 23);
			this->admncrt->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1008, 601);
			this->Controls->Add(this->Main);
			this->Controls->Add(this->Login);
			this->Controls->Add(this->Adpass_in);
			this->Controls->Add(this->Admin_in);
			this->Controls->Add(this->Admpass);
			this->Controls->Add(this->Admin);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->HelpButton = true;
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Main->ResumeLayout(false);
			this->Main->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->page1->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->page2->ResumeLayout(false);
			this->ADDCLIENT->ResumeLayout(false);
			this->ADDCLIENT->PerformLayout();
			this->Delacc->ResumeLayout(false);
			this->Delacc->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel8->ResumeLayout(false);
			this->flowLayoutPanel8->PerformLayout();
			this->flowLayoutPanel7->ResumeLayout(false);
			this->flowLayoutPanel7->PerformLayout();
			this->flowLayoutPanel6->ResumeLayout(false);
			this->flowLayoutPanel6->PerformLayout();
			this->flowLayoutPanel5->ResumeLayout(false);
			this->flowLayoutPanel5->PerformLayout();
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel4->PerformLayout();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->page3->ResumeLayout(false);
			this->ACCADD->ResumeLayout(false);
			this->ACCADD->PerformLayout();
			this->DelAC->ResumeLayout(false);
			this->DelAC->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->addaccfl6->ResumeLayout(false);
			this->addaccfl6->PerformLayout();
			this->addaccfl5->ResumeLayout(false);
			this->addaccfl5->PerformLayout();
			this->addaccfl4->ResumeLayout(false);
			this->addaccfl4->PerformLayout();
			this->addaccfl3->ResumeLayout(false);
			this->addaccfl3->PerformLayout();
			this->addaccfl2->ResumeLayout(false);
			this->addaccfl2->PerformLayout();
			this->addaccfl1->ResumeLayout(false);
			this->addaccfl1->PerformLayout();
			this->page4->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->Transfre->ResumeLayout(false);
			this->Transfre->PerformLayout();
			this->Withraw->ResumeLayout(false);
			this->Withraw->PerformLayout();
			this->Deposit->ResumeLayout(false);
			this->Deposit->PerformLayout();
			this->page5->ResumeLayout(false);
			this->addadmn->ResumeLayout(false);
			this->addadmn->PerformLayout();
			this->passchange->ResumeLayout(false);
			this->passchange->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int max_0 = 0, max_1 = 0, max_2 = 0, max_3 = 0, max_4 = 0;
		//var that are related to the graph
		int clicked = 0;
		int old_max_3;
		//var that are related to add account
		int clicked_1 = 0;
		//var related to op
		int opfnd;
		int opfnd_2;
		int opfound = 0;
		// experimental testing
		int day = 1;
		String^ date= nullptr;
		String^ date_old;

		array<String^, 1>^ admn = gcnew array<String^, 1>(1000);
		array<String^, 1>^ data_1 = gcnew array<String^, 1>(1000);
		array<double, 1>^ data_2 = gcnew array<double, 1>(1000);
		array<long int, 1>^ sold = gcnew array<long int, 1>(1000);
		array<double, 1>^ data_3 = gcnew array<double, 1>(1000);
		void save()
		{
			FILE* admn1;
			FILE* data1_1;
			FILE* data2_2;
			FILE* data3_3;
			FILE* date;
			admn1 = NULL; data1_1 = NULL; data2_2 = NULL;
			admn1 = fopen("ADMIN.txt", "w+");
			data1_1 = fopen("DATA.txt", "w+");
			data2_2 = fopen("DATA2.txt", "w+");
			data3_3 = fopen("DATA3.txt", "w+");
			date = fopen("DAY.txt", "w+");
			rewind(admn1); rewind(data1_1); rewind(data2_2); rewind(data3_3); rewind(date);
			for (int i = 0; i < max_0; i++)
			{
				fprintf(admn1, "%s\r", admn[i]);
			}
			for (int i = 0; i < max_1; i++)
			{
				fprintf(data1_1, "%s\r", data_1[i]);
			}
			for (int i = 0; i < max_2; i++)
			{
				fprintf(data2_2, "%s\r", Convert::ToString(data_2[i]));
			}
			for (int i = 0; i < max_4; i++)
			{
				fprintf(data3_3, "%s\r", Convert::ToString(data_3[i]));
			}
			fprintf(date, "%s\r", Convert::ToString(datecheck->Value));
			fclose(admn1); fclose(data1_1); fclose(data2_2); fclose(data3_3); fclose(date);
		}
		void readfiles()
		{
			String^ datafile = "ADMIN.txt";
			String^ datafile_1 = "DATA.txt";
			String^ datafile_2 = "DATA2.txt";
			String^ datafile_3 = "DATA3.txt";
			String^ datefile_0 = "DAY.txt";
			StreamReader^ DataIn = File::OpenText(datafile);
			StreamReader^ DataIn_1 = File::OpenText(datafile_1);
			StreamReader^ DataIn_2 = File::OpenText(datafile_2);
			StreamReader^ DataIn_3 = File::OpenText(datafile_3);
			StreamReader^ DataIn_4 = File::OpenText(datefile_0);
			String^ DataStr;
			int i = 0;
			while ((DataStr = DataIn->ReadLine()) != nullptr)
			{
				admn[i] = DataStr;
				i++;
				max_0 = i;
			}
			int j = 0;
			while ((DataStr = DataIn_1->ReadLine()) != nullptr)
			{
				data_1[j] = DataStr;
				j++;
				max_1 = j;
			}
			int k = 0;
			while ((DataStr = DataIn_2->ReadLine()) != nullptr)
			{
				data_2[k] = Convert::ToDouble(DataStr);
				k++;
				max_2 = k;
			}
			int m = 0;
			while ((DataStr = DataIn_3->ReadLine()) != nullptr)
			{
				data_3[m] = Convert::ToDouble(DataStr);
				m++;
				max_4 = m;
			}
			while ((DataStr = DataIn_2->ReadLine()) != nullptr)
				date_old = DataStr;
			DataIn->Close(); DataIn_1->Close(); DataIn_2->Close(); DataIn_3->Close(); DataIn_4->Close();
		}
		void calc()
		{
			for (int i = 0; i <= max_3; i++)
			{
				sold[i] = 0;
			}
			for (int i = 0; i < max_1; i += 6)
			{
				for (int j = 1; j < max_2; j += 3)
				{
					if (data_1[i] == Convert::ToString(data_2[j]))
					{
						sold[i / 6] += data_2[j + 1];
					}
				}
				max_3 = i / 6;
			}
		}
	private: System::Void Login_Click(System::Object^  sender, System::EventArgs^  e) {
		array<TextBox^, 1>^ _login = gcnew array<TextBox^, 1>{Adpass_in, Admin_in};
		array<Label^, 1>^ _login_2 = gcnew array<Label^, 1>{Admin, Admpass};
		int loc = -1;
		for (int i = 0; i < max_0; i += 3)
		{
			if (Admin_in->Text == admn[i] || Admin_in->Text == admn[i + 1])
			{
				loc = i;
			}
		}
		if (Adpass_in->Text == admn[loc + 2])
		{
			pictureBox1->Enabled = 0; pictureBox1->Visible = 0;
			Login->Enabled = 0; Login->Visible = 0;
			for (int i = 0; i < 2; i++)
			{
				_login[i]->Enabled = 0; _login[i]->Visible = 0;
				_login_2[i]->Enabled = 0; _login_2[i]->Visible = 0;
			}
			{
				//insert here what other functions
				calc();
				Main->Visible = 1; Main->Enabled = 1;

			}
		}
		else
		{
			MessageBox::Show("incorrect password");
			Admin_in->Text = nullptr;
			Adpass_in->Text = nullptr;
		}
		if (loc == -1)
			if (MessageBox::Show("invalid account", "please re-enter your account", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error) == (System::Windows::Forms::DialogResult::Retry))
			{
				Admin_in->Text = nullptr;
				Adpass_in->Text = nullptr;
			}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		readfiles();
		date = Convert::ToString(datecheck->Value);
	}
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (clicked == 0)
		{
			old_max_3 = max_3;
			for (int i = 0; i <= max_3; i++)
			{
				chart1->Series->Add("Client " + i);
				chart1->Series["Client " + i]->Points->AddXY("Client" + i, sold[i]);
			}
			clicked = 1;
		}
		else if (clicked == 1)
		{
			for (int i = 0; i <= max_3; i++)
			{
				if (old_max_3>=max_3)
					chart1->Series["Client " + i]->Points->AddXY("Client " + i, sold[i]);
				else if(old_max_3<max_3 && i==max_3)
				{
					chart1->Series->Add("Client " + i);
					chart1->Series["Client " + i]->Points->AddXY("Client " + i, sold[i]);
				}
			}
		}

	}
	private: System::Void Srch_Click(System::Object^  sender, System::EventArgs^  e) {
		//data input Search
		int faound = 0;
		tabControl1->SelectTab("page1");
		array<TextBox^, 1>^ _Searchbox = gcnew array<TextBox^, 1> { resultBox1, resultBox2, resultBox3, resultBox4, resultBox5, resultBox6, resultBox7, resultBox8, resultBox9, resultBox10};
		splitContainer1->Panel1Collapsed = 1;
		for (int i = 0; i < max_1; i += 6)
		{
			if (Search->Text == data_1[i] || Search->Text == data_1[i+1]+" "+ data_1[i + 2] || Search->Text == data_1[i + 2] + " " + data_1[i + 1])
			{
				groupBox1->Visible = 0; groupBox1->Enabled = 0;
				_Searchbox[0]->Text = data_1[i + 1] + " " + data_1[i + 2];
				_Searchbox[1]->Text = data_1[i];
				_Searchbox[2]->Text = data_1[i + 4];
				_Searchbox[3]->Text = Convert::ToString(sold[i / 6]);
				int l, n;
				l = n = 1;
				//int tem[50] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
					for (int j = l; j < max_2; j++ )
					{
						if (Convert::ToString(data_2[j]) == data_1[i])
						{
							if(chart2->Series->IsUniqueName("Account " + Convert::ToString(data_2[j - 1])))
								chart2->Series->Add("Account " + Convert::ToString(data_2[j - 1]));
							chart2->Series["Account " + Convert::ToString(data_2[j - 1])]->Points->AddXY("Account " + Convert::ToString(data_2[j - 1]), data_2[j + 1]);
							l += 3;
							//break;
						}
				}
					faound = 1;
			}
		}
		int find = -1;
		for (int i = 0; i < max_4; i+=9)
		{
			
			if (Search->Text == Convert::ToString(data_3[i]))
			{
				groupBox1->Visible = 1; groupBox1->Enabled = 1;
				for (int j = 0; j < max_2; j += 3)
				{
					if (Search->Text == Convert::ToString(data_2[j]))
					{
						for (int k = 0; k < max_1; k += 3)
						{
							if (Convert::ToString(data_2[j + 1]) == data_1[k])
							{
								nametext->Text = data_1[k + 1] + " " + data_1[k + 2];
							}
						}
						soldtext->Text = Convert::ToString(data_2[j + 2]);
					}
				}
				int day = 1;
				for (int k = i+2; k < i + 9; k++)
				{
						if (chart3->Series->IsUniqueName("day : " + day))
							chart3->Series->Add("day : " + day);
							chart3->Series["day : " + Convert::ToString( k-i-1 )]->Points->AddXY("day" + day, data_3[k]);
						if (day == 8) day = 1;
						else day++;
				}
				faound = 1;
			}
		}
		if (faound == 0) MessageBox::Show("Account not found");
	}
	private: System::Void addClientToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		ADDCLIENT->Visible = 1; ADDCLIENT->Enabled = 1;
		Delacc->Visible = 0; Delacc->Enabled = 0;
	}
	private: System::Void Create_Click(System::Object^  sender, System::EventArgs^  e) {
		srand(time(0));
		array<TextBox^, 1>^ _addacc = gcnew array<TextBox^, 1> {addacc1, addacc2, addacc3, addacc4, addacc5, addacc6};
		int r[2];
		int clear = 0;
		for (int i = 0; i < 6; i++)
		{
			if (i == 4) continue;
			if (_addacc[i]->Text == nullptr)
				clear++;
		}
		if (clear == 0 && Convert::ToInt32(_addacc[5]->Text)>=1000 )
		{
			r[0] = rand() % 1000000000;
			r[1] = rand() % 10000000000;
			//add condition of no repeating codes
			//appends the DATA1 data
				data_1[max_1] = Convert::ToString(r[0]);
				data_1[max_1 + 1] = _addacc[0]->Text;
				data_1[max_1 + 2] = _addacc[1]->Text;
				data_1[max_1 + 3] = _addacc[2]->Text;
				data_1[max_1 + 4] = _addacc[3]->Text;
				data_1[max_1 + 5] = Convert::ToString(dateTimePicker1->Value);
			//appends the DATA2 data
				data_2[max_2] = r[1];
				data_2[max_2 + 1] = r[0];
				data_2[max_2 + 2] = Convert::ToInt32(_addacc[5]->Text);
				sold[max_3 + 1] = Convert::ToInt32(_addacc[5]->Text);
			max_1 += 6;
			max_2 += 3;
			max_3 += 1;
			_addacc[4]->Text = Convert::ToString(r[0]);
			MessageBox::Show("The new Client's ID is : " + r[0] + "\nAccount ID is :" + r[1]);
		}
		else if (Convert::ToInt32(_addacc[5]->Text) < 700)
		{
			MessageBox::Show("Insuficient ammount of Money", "The minimum entring Sold is 700Dh !!",MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else if (clear != 4)
		{
			if (MessageBox::Show("Please Fill all Input Blocks", "Insuficient Input", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::Cancel)
			{
				for (int i = 0; i < 10; i++)
					_addacc[i]->Text = nullptr;
			}
		}
	}
	private: System::Void DelSearchBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		array<TextBox^, 1>^ _rsltdel = gcnew array<TextBox^, 1> { Dellacc1_1, Dellacc1_2, Dellacc1_3, Dellacc1_4};
		int notfound = 0;
		flowLayoutPanel1->Visible = 1; flowLayoutPanel1->Enabled = 1;
		for (int i = 0; i < max_1; i += 6)
		{
			if (Delsearch->Text == data_1[i])
			{
				_rsltdel[0]->Text = data_1[i];
				_rsltdel[0 + 1]->Text = data_1[i + 2] + " " + data_1[i + 1];
				_rsltdel[0 + 2]->Text = data_1[i + 3];
				_rsltdel[0 + 3]->Text = Convert::ToString(sold[i/6]);
				notfound = 1;
				break;
			}
			else if (Delsearch->Text == data_1[i + 2] + " " + data_1[i + 1] || Delsearch->Text == data_1[i + 1] + " " + data_1[i + 2])
			{
				_rsltdel[0]->Text = data_1[i ];
				_rsltdel[0 + 1]->Text = data_1[i  + 2] + " " + data_1[i + 1];
				_rsltdel[0 + 2]->Text = data_1[i  + 3];
				_rsltdel[0 + 3]->Text = Convert::ToString(sold[i/6]);
				check1->Enabled = 0; check1->Visible = 0;
				notfound = 1;
				break;
			}
			else notfound++;
		}
		if (notfound != 1)
		{
			MessageBox::Show("account not available");
		}
	}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	array<FlowLayoutPanel^, 1>^ _grid = gcnew array<FlowLayoutPanel^, 1> { flowLayoutPanel1, flowLayoutPanel2, flowLayoutPanel3, flowLayoutPanel4, flowLayoutPanel5, flowLayoutPanel6, flowLayoutPanel7, flowLayoutPanel8};
	array<TextBox^, 1>^ _rsltdel = gcnew array<TextBox^, 1> { Dellacc1_1, Dellacc1_2, Dellacc1_3, Dellacc1_4, Dellacc2_1, Dellacc2_2, Dellacc2_3, Dellacc2_4 ,  Dellacc3_1, Dellacc3_2, Dellacc3_3, Dellacc3_4 ,  Dellacc4_1, Dellacc4_2, Dellacc4_3, Dellacc4_4 ,  Dellacc5_1, Dellacc5_2, Dellacc5_3, Dellacc5_4 , Dellacc6_1, Dellacc6_2, Dellacc6_3, Dellacc6_4 , Dellacc7_1, Dellacc7_2, Dellacc7_3, Dellacc7_4 , Dellacc8_1, Dellacc8_2, Dellacc8_3, Dellacc8_4 };
	array<CheckBox^, 1>^ _delch = gcnew	array<CheckBox^, 1> { check1, check2, check3, check4, check5, check6, check7, check8};
	DelSearchBtn->Enabled = 0; DelSearchBtn->Visible = 0;
	Delsearch->Enabled = 0; Delsearch->Visible = 0;
	calc();
	for (int  i = 0; i <= max_3; i++)
	{
		_grid[i]->Enabled = 1; _grid[i]->Visible = 1;
		for (int j = max_3 + 1; j < 8; j++)
		{
			_grid[j]->Enabled = 0; _grid[j]->Visible = 0;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		_delch[i]->Visible = 1; _delch[i]->Enabled = 1;
	}
	for (int k = 0,i=0;i<=max_3;i++, k += 4)
	{
			_rsltdel[k]->Text = data_1[i*6];
			_rsltdel[k+1]->Text = data_1[i*6+2] + " " + data_1[i*6 + 1];
			_rsltdel[k+2]->Text = data_1[i*6+3];
			_rsltdel[k+3]->Text = Convert::ToString(sold[i]);
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	array<FlowLayoutPanel^, 1>^ _grid = gcnew array<FlowLayoutPanel^, 1> { flowLayoutPanel1, flowLayoutPanel2, flowLayoutPanel3, flowLayoutPanel4, flowLayoutPanel5, flowLayoutPanel6, flowLayoutPanel7, flowLayoutPanel8};
	DelSearchBtn->Enabled = 1; DelSearchBtn->Visible = 1;
	Delsearch->Enabled = 1; Delsearch->Visible = 1;
	for (int i = 0; i < 8; i++)
	{
		_grid[i]->Enabled = 0; _grid[i]->Visible = 0;
	}
}
private: System::Void DELETE_Click(System::Object^  sender, System::EventArgs^  e) {
	array<TextBox^, 1>^ _rsltdel = gcnew array<TextBox^, 1> { Dellacc1_1, Dellacc2_1, Dellacc3_1, Dellacc4_1, Dellacc5_1, Dellacc6_1, Dellacc7_1, Dellacc8_1};
	array<CheckBox^, 1>^ _delch = gcnew	array<CheckBox^, 1> { check1, check2, check3, check4, check5, check6, check7, check8};
	int fnd[5] = { 0,0,0,0,0 };
	int fnd_2[5] = { 0,0,0,0,0 };
	int fndmax=0;
	int tempo_test = -1;
	if (MessageBox::Show("Confirmation Request", "Please Confirm your deletion request\a", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning) == (System::Windows::Forms::DialogResult::OK))
	{
		if (radioButton2->Checked == 1)
		{
			int ischecked = 0;
			for (int i = 0; i < 8; i++)
			{
				if (_delch[i]->Checked == 1)
					ischecked++;
			}
			if (ischecked != 0)
			{
				for (int i = 0; i < 8; i++)
				{
					if (_delch[i]->Checked == 1)
					{
						for (int i = 0; i < 5; i++)
						{
							fnd_2[i] = 0;
						}
						for (int j = 0; j < max_1; j++)
						{
							if (_rsltdel[i]->Text == data_1[j])
							{
								tempo_test = j;
							}
						}
						//delete account from data_1
						for (int k = 0, j = tempo_test + 6; j < max_1; k++, j++)
						{
							data_1[tempo_test + k] = data_1[j];
						}
						for (int j = max_1 - 1; j >= max_1 - 6; j--)
						{
							data_1[j] = nullptr;
						}
						max_1 -= 6;
						//delete data from data_2
						for (int j = 1; j < max_2; j++)//finds data related to client in data_2
						{
							if (_rsltdel[i]->Text == Convert::ToString(data_2[j]))
							{
								fnd[fndmax] = j;
								fndmax++;
							}
						}
						if (fndmax != 0)
						{
							for (int delvar = 0; delvar < fndmax; delvar++)//deletes data from data_2
							{
								for (int j = fnd[delvar]-1; j < max_2; j++)
								{
									data_2[j] = data_2[j+3];
								}
							}
							for (int j = max_2 - fndmax * 3; j < max_2; j++)//deletes additional cells
							{
								data_2[j] = 0;
							}
							max_2 -= 3 * fndmax;
							max_3 -= 1 * fndmax;
							calc();
							fndmax = 0;
						}
						else MessageBox::Show("error");
					}
				}
			}
			else if (ischecked == 0)
			{
				for (int k = 0; k < max_1; k++)
				{
					data_1[k] = nullptr;
				}
				for (int k = 0; k < max_2; k++)
				{
					data_2[k] = 0;
				}
				calc();
				max_1 = 0;
				max_2 = 0;
				max_3 = 0;
			}
		}
		else if (radioButton1->Checked == 1)
		{
			for (int i = 0; i < max_1; i += 6)
			{
				if (Dellacc1_1->Text == data_1[i])//delete accout's data from data_1
				{
					for (int k = i, j = i + 6; j < max_1; k++, j++)
					{
						data_1[k] = data_1[j];

					}
					for (int j = max_1 - 6; j < max_1; j++)
						data_1[j] = nullptr;
				}
			}
			max_1 -= 6;
			for (int j = 1; j < max_2; j += 3)//finds data related to client in data_2
			{
				if (Dellacc1_1->Text == Convert::ToString(data_2[j]))
				{
					fnd_2[j] = j;
					fndmax++;
				}
			}
			for (int delvar = 0; delvar < fndmax; delvar++)//deletes data from data_2
			{
				for (int j = fnd_2[delvar] + 3; j < max_2; j++)
				{
					data_2[fnd_2[delvar]] = data_2[j];
					data_2[fnd_2[delvar] + 1] = data_2[j + 1];
					data_2[fnd_2[delvar] + 2] = data_2[j + 2];
				}
			}
			for (int j = max_2 - fndmax * 3; j < max_2; j++)//deletes additional cells
			{
				data_2[j] = 0;
			}
			max_2 -= 3;
			max_3 -= 1;
			fndmax = 0;
			calc();
		}
	}
}
private: System::Void CreateACC_Click(System::Object^  sender, System::EventArgs^  e) {
	int count = 0;
	int r;
	for (int i = 0; i < max_2; i++)
	{
		if (accadd1->Text == Convert::ToString(data_2[i]))
		{
			count++;
		}
	}
	if (count == 0)
	{
		MessageBox::Show("Account unavailable", "Invalid Account", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	else
	{
		if (clicked_1 == 0)
		{
			if (count >= 5) MessageBox:("account maximum has been reach", "cannot create more than 5accounts per client", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else if (Convert::ToInt32(accadd2->Text) < 700)
			{
				MessageBox::Show("Solde de base must be at least 700dh");
			}
			else if (count < 5 && Convert::ToInt32(accadd2->Text) >= 700)
			{
				r = rand() % 10000000000;
				//add condition of ne repeating
				accadd3->Text = Convert::ToString(r);
				data_2[max_2] = r;
				data_2[max_2 + 1] = Convert::ToInt32(accadd1->Text);
				data_2[max_2 + 2] = Convert::ToInt32(accadd2->Text);
				MessageBox::Show("account created");
				max_2 += 3;
				clicked = 1;
				calc();
			}
		}
		else if (clicked == 1)
		{
			if ((MessageBox::Show("WARNIGN\a", "Are you sure you wanna create another account under the same client ID ??", MessageBoxButtons::AbortRetryIgnore, MessageBoxIcon::Warning) == ((System::Windows::Forms::DialogResult::Ignore))))
			{
				if (count >= 5) MessageBox::Show("account maximum has been reach", "cannot create more than 5accounts per client", MessageBoxButtons::OK, MessageBoxIcon::Error);
				else if (Convert::ToInt32(accadd2->Text) < 700)
				{
					MessageBox::Show("Solde de base must be at least 700dh");
				}
				else if (count < 5 && Convert::ToInt32(accadd2->Text) >= 700)
				{
					r = rand() % 10000000000;
					//add condition of ne repeating
					accadd3->Text = Convert::ToString(r);
					MessageBox::Show("account created");
					data_2[max_2] = r;
					data_2[max_2 + 1] = Convert::ToInt32(accadd1->Text);
					data_2[max_2 + 3] = Convert::ToInt32(accadd2->Text);
					MessageBox::Show("account created");
					max_2 += 3;
					clicked = 1;
					calc();
				}
			}
			else if ((MessageBox::Show("WARNIGN\a", "Are you sure you wanna create another account under the same client ID ??", MessageBoxButtons::AbortRetryIgnore, MessageBoxIcon::Warning) == ((System::Windows::Forms::DialogResult::Abort))))
			{
				accadd1->Text = nullptr; accadd2->Text = nullptr; accadd3->Text = nullptr;
			}
			else if ((MessageBox::Show("WARNIGN\a", "Are you sure you wanna create another account under the same client ID ??", MessageBoxButtons::AbortRetryIgnore, MessageBoxIcon::Warning) == ((System::Windows::Forms::DialogResult::Retry))))
			{
				//do nada
			}

		}
	}
}
private: System::Void removeClientToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ADDCLIENT->Visible = 1; ADDCLIENT->Enabled = 1;
	Delacc->Visible = 1; Delacc->Enabled = 1;
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int found[5], count = 0;
	array<TextBox^, 1>^ _delacc = gcnew array<TextBox^, 1> {delacc1_1, delacc1_3, delacc2_1, delacc2_3, delacc3_1, delacc3_3, delacc4_1, delacc4_3, delacc5_1, delacc5_3, delacc6_1, delacc6_3};
	array<FlowLayoutPanel^, 1>^ _grid2 = gcnew array<FlowLayoutPanel^, 1> {addaccfl1, addaccfl2, addaccfl3, addaccfl4, addaccfl5, addaccfl6};
	for (int i = 0; i < max_2; i++)
	{
		if (serchdata->Text == Convert::ToString(data_2[i]))
		{
			found[count]=i;
			count++;
		}
	}
	if (count!=0)
	{
		for (int i = 0; i < count; i++)
		{
			_grid2[i]->Enabled = 1;	_grid2[i]->Visible = 1;
		}
		for (int i = count; i < 6; i++)
		{
			_grid2[i]->Enabled = 0;	_grid2[i]->Visible = 0;
		}
		for (int k=0 , i = 0; k<3*count , i < 3*count;k+=2, i+=3)
		{
			_delacc[k]->Text = Convert::ToString(data_2[found[i /3] - 1]);// +1 
			_delacc[k + 1]->Text = Convert::ToString(data_2[found[i / 3] + 1]); // +2
		}
	}
	else MessageBox::Show("Acoount not available");
	for(int i=0;i<5;i++) found[i]=0; count = 0;
}
private: System::Void addAccountToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	DelAC->Enabled = 0; DelAC->Visible = 0;
	ACCADD->Enabled = 1; ACCADD->Visible = 1;
}
private: System::Void removeAccountToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ACCADD->Enabled = 1; ACCADD->Visible = 1;
	DelAC->Enabled = 1; DelAC->Visible = 1;
}
private: System::Void Delacc2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ search_result = nullptr;
	int count = -1;
	array<TextBox^, 1>^ _delacc = gcnew array<TextBox^, 1> {delacc1_1, delacc1_3, delacc2_1, delacc2_3, delacc3_1, delacc3_3, delacc4_1, delacc4_3, delacc5_1, delacc5_3, delacc6_1, delacc6_3};
	array<FlowLayoutPanel^, 1>^ _grid2 = gcnew array<FlowLayoutPanel^, 1> {addaccfl1, addaccfl2, addaccfl3, addaccfl4, addaccfl5, addaccfl6};
	array<CheckBox^, 1>^ _delaccchck = gcnew array<CheckBox^, 1> {dlcheckBox1, dlcheckBox2, dlcheckBox3, dlcheckBox4, dlcheckBox5, dlcheckBox6};
	for (int i = 0; i < 6; i++)
	{
		if (_delaccchck[i]->Checked == 1)
		{
			search_result = _delacc[i]->Text;
		}
	}
	if (search_result != nullptr)
	{
		if (MessageBox::Show("Confirmation demand", "PLEASE confirm yur action", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::Yes)
		{
			for (int i = 0; i <= max_2; i++)
			{
				if (Convert::ToString(data_2[i]) == search_result)
				{
					count = i;
				}
			}
			if (count != -1)
			{
				for (int i = count - 1; i < max_2; i++)
				{
					data_2[i] = data_2[i + 3];
				}
				for (int i = max_2 - 1; i > max_2 - 3; i--)
				{
					data_2[i] = 0;
				}
				max_2 -= 3;
				calc();
			}
			for (int i = count - 1; i < 6; i++)
			{
				_grid2[i]->Enabled = 0;	_grid2[i]->Visible = 0;
			}
		}
	}
	else MessageBox::Show("BUGBUBUGBUGBUGBUGBGUBGUBGUBGUBGUBGU");
}
private: System::Void opsrchbtn_Click(System::Object^  sender, System::EventArgs^  e) {
	int countt=0, countt2=0;
	if (opsearch2->Visible == 0)
	{
		for (int i = 0; i < max_2; i+=3)
		{
			if (opsearch->Text == Convert::ToString(data_2[i]))
			{
				opfnd = i;
				countt++;
			}
		}
		if (countt == 0) MessageBox::Show("account not available");
		else opfound = 1;
	}
	else if (opsearch2->Visible == 1)
	{
		for (int i = 0; i < max_2; i+=3)
		{
			if (opsearch->Text == Convert::ToString(data_2[i]))
			{
				opfnd = i;
				countt2++;
			}
		}
		for (int i = 0; i < max_2; i+=3)
		{
			if (opsearch2->Text == Convert::ToString(data_2[i]))
			{
				opfnd_2 = i;
				countt2++;
			}
		}
		if (countt2!=2) MessageBox::Show("receiver/sender account not available");
		else if(countt2 == 2 ) opfound = 1;

	}
}
private: System::Void DeposConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	int sold;
	sold = Convert::ToInt32(deposin->Text);
	if (opfound != 0)
	{
		sold += data_2[opfnd + 2];
		data_2[opfnd + 2] = sold;
		data_3[opfnd * 3 + 1 + day] += sold;
		if (date_old != date)
			day++;
		if (day == 8)
		{
			day = 1;
			for (int i = 0; i < 8; i++)
				data_3[opfnd * 3 + 1 + i] = 0;
		}
		MessageBox::Show("Operation DONE", deposin->Text + "dh has been deposited", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	calc();
}
private: System::Void WithrawConf_Click(System::Object^  sender, System::EventArgs^  e) {
	int sold;
	sold = -1*Convert::ToInt32(Withrout->Text);
	if (opfound != 0)
	{
		if (Convert::ToInt32(Withrout->Text) <= 700)
		{
			sold += data_2[opfnd + 2];
			data_2[opfnd + 2] = sold;
			data_3[opfnd * 3 + 1 + day] += sold;
			if(date_old!=date)
				day++;
			if (day == 8)
			{
				day = 1;
				for (int i = 0; i < 8; i++)
					data_3[opfnd * 3 + 1 + i] = 0;
			}
			MessageBox::Show("Operation DONE", Withrout->Text + "dh has been withrown", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else MessageBox::Show("cannot withraw more than 700dh");
	}
	calc();
}
private: System::Void depositToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Withraw->Visible = 0;
	Deposit->Visible = 1;
	Transfre->Visible = 0;

	opsearch2->Visible = 0;
	label39->Visible = 0;
}
private: System::Void withrawToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Withraw->Visible = 1;
	Deposit->Visible = 0;
	Transfre->Visible = 0;

	opsearch2->Visible = 0;
	label39->Visible = 0;
}
private: System::Void transferToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	opsearch2->Visible = 1;
	label39->Visible = 1;
	Withraw->Visible = 0;
	Deposit->Visible = 0;
	Transfre->Visible = 1;
}
private: System::Void confirm_Click(System::Object^  sender, System::EventArgs^  e) {
		
}
private: System::Void opconfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	if (opfound = 1)
	{
		int sold_2, sold_1;
		sold_1 = -1 * Convert::ToInt32(TransferI_T->Text);
		sold_2 = Convert::ToInt32(TransferI_T->Text);
		data_2[opfnd_2 + 2] += sold_2;
		data_2[opfnd + 2] += sold_1;
		MessageBox::Show("Operation DONE", TransferI_T->Text + "dh has been Transfered from ", MessageBoxButtons::OK, MessageBoxIcon::Information);
		calc();
	}
}
private: System::Void logOutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Main->Visible = 0; Main->Enabled = 0;
	array<TextBox^, 1>^ _login = gcnew array<TextBox^, 1>{Adpass_in, Admin_in};
	array<Label^, 1>^ _login_2 = gcnew array<Label^, 1>{Admin, Admpass};
	for (int i = 0; i < 2; i++)
	{
		_login[i]->Enabled = 1; _login[i]->Visible = 1;
		_login_2[i]->Enabled = 1; _login_2[i]->Visible = 1;
	}
	pictureBox1->Enabled = 1; pictureBox1->Visible = 1;
	Login->Enabled = 1; Login->Visible = 1;
	save();
}
private: System::Void EXIT_Click(System::Object^  sender, System::EventArgs^  e) {
	save();
	this->Close();
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void Minimize_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void DelAC_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void clientToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab("page2");
}
private: System::Void accountsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab("page3");
}
private: System::Void operationsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab("page4");
}
private: System::Void settingsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab("page5");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab("page1");
	splitContainer1->Panel1Collapsed = 0;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < max_0; i+=3)
	{
		if (Admin_in->Text == admn[i] || Admin_in->Text == admn[i+1])
		{
			if (oldpass->Text == admn[i + 2])
			{
				if (newpass->Text == rnewpass->Text)
				{
					admn[i + 2] = newpass->Text;
					MessageBox::Show("your new password is : " + newpass->Text);
				}
				else MessageBox::Show("Invalid new_password", "REenter the new password correctly", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else MessageBox::Show("Invalid password", "OLD password incorrect", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void changePasswordToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	passchange->Visible = 1;
	addadmn->Visible = 0;
}
private: System::Void addAdmnAccountToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	passchange->Visible = 0;
	addadmn->Visible = 1;
}
private: System::Void passchange_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void admncrt1_Click(System::Object^  sender, System::EventArgs^  e) {
	int r;
	if (admnm1->Text != nullptr && (admnpss1->Text == psscnf1->Text))
	{
		admn[max_0] = admnm1->Text;
		admn[max_0 + 2] = admnpss1->Text;
		r = rand() % 100000000000000;
		admn[max_0 + 1] = Convert::ToString(r);
		max_0 += 3;
		MessageBox::Show("account created");
	}
}
};
}
//DO DA DELELTION BUTTON AND (fixed) //FIX THE CHART PROBLEM (proly solved need testing)
//fix the chart problm

