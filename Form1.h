#include <windows.h>
#include <string>
#include <vector>
#pragma once

namespace OSC_CPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Form1 ���K�n
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		int nSleep;
		
	internal: System::Windows::Forms::Label^  Label_Hex2;
	internal: System::Windows::Forms::Label^  Label_Dec2;
	public: 

	public: 

	internal: System::Windows::Forms::Label^  Label_Hex1;
	internal: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  label6;


	internal: System::Windows::Forms::Label^  Label_Dec_Total;
	internal: System::Windows::Forms::Label^  label7;
	internal: System::Windows::Forms::Label^  label8;
	internal: System::Windows::Forms::Label^  LabelBaudRate;
	internal: System::Windows::Forms::TextBox^  TxtBoxBaudRate;
	internal: System::Windows::Forms::GroupBox^  groupBox2;
	internal: System::Windows::Forms::Label^  label10;
	internal: System::Windows::Forms::CheckBox^  chkFilter;
	internal: System::Windows::Forms::TextBox^  txtSleep;
	internal: System::Windows::Forms::Label^  labelSleep;

	internal: System::Windows::Forms::Label^  Label_Dec1;





		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �b���[�J�غc�禡�{���X
			//
			//��l��
			strRx = gcnew array<System::String ^> {"","","",""};
			ch=0;
			nSleep = 3; //����8051�e�r�ꪺ�ɶ��A�p��o�ӷ|�g�`������r��,�����Y�����T
			TimerPeriod->Interval = -nSleep + (int)(1000.0/Convert::ToDouble(TxtSampleRate->Text));//���W�v�������g��(mS)
			//���B�p��令�I�sTxtSampleRate_TextChanged�N�n?

			
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~Form1()
		{
			if(serialPort1->IsOpen)
				serialPort1->Close();

			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::TextBox^  TxtFormOpacity;
	protected: 
	internal: System::Windows::Forms::GroupBox^  GroupBox1;
	internal: System::Windows::Forms::Label^  Label_Hex;


	internal: System::Windows::Forms::Label^  Label_Dec;

	internal: System::Windows::Forms::CheckBox^  ChkBox_DotMode;
	internal: System::Windows::Forms::CheckBox^  ChkBox_LineMode;
	internal: System::Windows::Forms::Label^  Label1;
	internal: System::Windows::Forms::TextBox^  TxtSampleRate;
	internal: System::Windows::Forms::TextBox^  TxtScanSpeed;
	internal: System::Windows::Forms::PictureBox^  PicBox1;
	internal: System::Windows::Forms::Label^  LabelPortState;
	internal: System::Windows::Forms::TextBox^  TxtBoxPortNum;
	internal: System::Windows::Forms::Button^  BtPortControl;
	internal: System::Windows::Forms::Label^  Label2;
	internal: System::Windows::Forms::Label^  Label3;
	internal: System::Windows::Forms::Timer^  TimerPeriod;
	private: System::IO::Ports::SerialPort^  serialPort1;
	internal: 
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		array<System::String ^>^ strRx;
		int ch;
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边
		/// �ק�o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->TxtFormOpacity = (gcnew System::Windows::Forms::TextBox());
			this->GroupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Label_Dec_Total = (gcnew System::Windows::Forms::Label());
			this->Label_Hex2 = (gcnew System::Windows::Forms::Label());
			this->Label_Dec2 = (gcnew System::Windows::Forms::Label());
			this->Label_Hex1 = (gcnew System::Windows::Forms::Label());
			this->Label_Dec1 = (gcnew System::Windows::Forms::Label());
			this->Label_Hex = (gcnew System::Windows::Forms::Label());
			this->Label_Dec = (gcnew System::Windows::Forms::Label());
			this->ChkBox_DotMode = (gcnew System::Windows::Forms::CheckBox());
			this->ChkBox_LineMode = (gcnew System::Windows::Forms::CheckBox());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->TxtSampleRate = (gcnew System::Windows::Forms::TextBox());
			this->TxtScanSpeed = (gcnew System::Windows::Forms::TextBox());
			this->PicBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->LabelPortState = (gcnew System::Windows::Forms::Label());
			this->TxtBoxPortNum = (gcnew System::Windows::Forms::TextBox());
			this->BtPortControl = (gcnew System::Windows::Forms::Button());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->TimerPeriod = (gcnew System::Windows::Forms::Timer(this->components));
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->LabelBaudRate = (gcnew System::Windows::Forms::Label());
			this->TxtBoxBaudRate = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->chkFilter = (gcnew System::Windows::Forms::CheckBox());
			this->txtSleep = (gcnew System::Windows::Forms::TextBox());
			this->labelSleep = (gcnew System::Windows::Forms::Label());
			this->GroupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PicBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// TxtFormOpacity
			// 
			this->TxtFormOpacity->Font = (gcnew System::Drawing::Font(L"�s�ө���", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->TxtFormOpacity->Location = System::Drawing::Point(443, 62);
			this->TxtFormOpacity->Name = L"TxtFormOpacity";
			this->TxtFormOpacity->Size = System::Drawing::Size(34, 27);
			this->TxtFormOpacity->TabIndex = 56;
			this->TxtFormOpacity->Text = L"100";
			this->TxtFormOpacity->TextChanged += gcnew System::EventHandler(this, &Form1::TxtFormOpacity_TextChanged);
			// 
			// GroupBox1
			// 
			this->GroupBox1->Controls->Add(this->label7);
			this->GroupBox1->Controls->Add(this->Label_Dec_Total);
			this->GroupBox1->Controls->Add(this->Label_Hex2);
			this->GroupBox1->Controls->Add(this->Label_Dec2);
			this->GroupBox1->Controls->Add(this->Label_Hex1);
			this->GroupBox1->Controls->Add(this->Label_Dec1);
			this->GroupBox1->Controls->Add(this->Label_Hex);
			this->GroupBox1->Controls->Add(this->Label_Dec);
			this->GroupBox1->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->GroupBox1->Location = System::Drawing::Point(20, 3);
			this->GroupBox1->Name = L"GroupBox1";
			this->GroupBox1->Size = System::Drawing::Size(178, 141);
			this->GroupBox1->TabIndex = 55;
			this->GroupBox1->TabStop = false;
			this->GroupBox1->Text = L"Port Value";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"�L�n������", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(93, 113);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 24);
			this->label7->TabIndex = 61;
			this->label7->Text = L"�[�`";
			// 
			// Label_Dec_Total
			// 
			this->Label_Dec_Total->AutoSize = true;
			this->Label_Dec_Total->Font = (gcnew System::Drawing::Font(L"�L�n������", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Label_Dec_Total->Location = System::Drawing::Point(6, 108);
			this->Label_Dec_Total->Name = L"Label_Dec_Total";
			this->Label_Dec_Total->Size = System::Drawing::Size(61, 31);
			this->Label_Dec_Total->TabIndex = 6;
			this->Label_Dec_Total->Text = L"DEC";
			this->Label_Dec_Total->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// Label_Hex2
			// 
			this->Label_Hex2->AutoSize = true;
			this->Label_Hex2->Font = (gcnew System::Drawing::Font(L"�L�n������", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Label_Hex2->Location = System::Drawing::Point(91, 73);
			this->Label_Hex2->Name = L"Label_Hex2";
			this->Label_Hex2->Size = System::Drawing::Size(60, 31);
			this->Label_Hex2->TabIndex = 5;
			this->Label_Hex2->Text = L"HEX";
			this->Label_Hex2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// Label_Dec2
			// 
			this->Label_Dec2->AutoSize = true;
			this->Label_Dec2->Font = (gcnew System::Drawing::Font(L"�L�n������", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Label_Dec2->Location = System::Drawing::Point(6, 73);
			this->Label_Dec2->Name = L"Label_Dec2";
			this->Label_Dec2->Size = System::Drawing::Size(61, 31);
			this->Label_Dec2->TabIndex = 4;
			this->Label_Dec2->Text = L"DEC";
			this->Label_Dec2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// Label_Hex1
			// 
			this->Label_Hex1->AutoSize = true;
			this->Label_Hex1->Font = (gcnew System::Drawing::Font(L"�L�n������", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Label_Hex1->Location = System::Drawing::Point(91, 46);
			this->Label_Hex1->Name = L"Label_Hex1";
			this->Label_Hex1->Size = System::Drawing::Size(60, 31);
			this->Label_Hex1->TabIndex = 3;
			this->Label_Hex1->Text = L"HEX";
			this->Label_Hex1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// Label_Dec1
			// 
			this->Label_Dec1->AutoSize = true;
			this->Label_Dec1->Font = (gcnew System::Drawing::Font(L"�L�n������", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Label_Dec1->Location = System::Drawing::Point(6, 46);
			this->Label_Dec1->Name = L"Label_Dec1";
			this->Label_Dec1->Size = System::Drawing::Size(61, 31);
			this->Label_Dec1->TabIndex = 2;
			this->Label_Dec1->Text = L"DEC";
			this->Label_Dec1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// Label_Hex
			// 
			this->Label_Hex->AutoSize = true;
			this->Label_Hex->Font = (gcnew System::Drawing::Font(L"�L�n������", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Label_Hex->Location = System::Drawing::Point(91, 19);
			this->Label_Hex->Name = L"Label_Hex";
			this->Label_Hex->Size = System::Drawing::Size(60, 31);
			this->Label_Hex->TabIndex = 1;
			this->Label_Hex->Text = L"HEX";
			this->Label_Hex->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// Label_Dec
			// 
			this->Label_Dec->AutoSize = true;
			this->Label_Dec->Font = (gcnew System::Drawing::Font(L"�L�n������", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Label_Dec->Location = System::Drawing::Point(6, 19);
			this->Label_Dec->Name = L"Label_Dec";
			this->Label_Dec->Size = System::Drawing::Size(61, 31);
			this->Label_Dec->TabIndex = 0;
			this->Label_Dec->Text = L"DEC";
			this->Label_Dec->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// ChkBox_DotMode
			// 
			this->ChkBox_DotMode->AutoSize = true;
			this->ChkBox_DotMode->Enabled = false;
			this->ChkBox_DotMode->Font = (gcnew System::Drawing::Font(L"�s�ө���", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->ChkBox_DotMode->Location = System::Drawing::Point(528, 22);
			this->ChkBox_DotMode->Name = L"ChkBox_DotMode";
			this->ChkBox_DotMode->Size = System::Drawing::Size(89, 20);
			this->ChkBox_DotMode->TabIndex = 53;
			this->ChkBox_DotMode->Text = L"Dot mode";
			this->ChkBox_DotMode->UseVisualStyleBackColor = true;
			// 
			// ChkBox_LineMode
			// 
			this->ChkBox_LineMode->AutoSize = true;
			this->ChkBox_LineMode->Checked = true;
			this->ChkBox_LineMode->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ChkBox_LineMode->Font = (gcnew System::Drawing::Font(L"�s�ө���", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->ChkBox_LineMode->Location = System::Drawing::Point(528, 3);
			this->ChkBox_LineMode->Name = L"ChkBox_LineMode";
			this->ChkBox_LineMode->Size = System::Drawing::Size(94, 20);
			this->ChkBox_LineMode->TabIndex = 52;
			this->ChkBox_LineMode->Text = L"Line mode";
			this->ChkBox_LineMode->UseVisualStyleBackColor = true;
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Font = (gcnew System::Drawing::Font(L"�L�n������", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Label1->Location = System::Drawing::Point(358, 8);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(86, 24);
			this->Label1->TabIndex = 50;
			this->Label1->Text = L"���y�t��";
			// 
			// TxtSampleRate
			// 
			this->TxtSampleRate->Font = (gcnew System::Drawing::Font(L"�s�ө���", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->TxtSampleRate->Location = System::Drawing::Point(443, 34);
			this->TxtSampleRate->Name = L"TxtSampleRate";
			this->TxtSampleRate->Size = System::Drawing::Size(47, 27);
			this->TxtSampleRate->TabIndex = 49;
			this->TxtSampleRate->Text = L"25";
			this->TxtSampleRate->TextChanged += gcnew System::EventHandler(this, &Form1::TxtSampleRate_TextChanged);
			// 
			// TxtScanSpeed
			// 
			this->TxtScanSpeed->Font = (gcnew System::Drawing::Font(L"�s�ө���", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->TxtScanSpeed->Location = System::Drawing::Point(443, 6);
			this->TxtScanSpeed->Name = L"TxtScanSpeed";
			this->TxtScanSpeed->Size = System::Drawing::Size(47, 27);
			this->TxtScanSpeed->TabIndex = 48;
			this->TxtScanSpeed->Text = L"2";
			this->TxtScanSpeed->TextChanged += gcnew System::EventHandler(this, &Form1::TxtScanSpeed_TextChanged);
			// 
			// PicBox1
			// 
			this->PicBox1->BackColor = System::Drawing::Color::Black;
			this->PicBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PicBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->PicBox1->Location = System::Drawing::Point(8, 150);
			this->PicBox1->Name = L"PicBox1";
			this->PicBox1->Size = System::Drawing::Size(900, 500);
			this->PicBox1->TabIndex = 47;
			this->PicBox1->TabStop = false;
			// 
			// LabelPortState
			// 
			this->LabelPortState->AutoSize = true;
			this->LabelPortState->Font = (gcnew System::Drawing::Font(L"�L�n������", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->LabelPortState->Location = System::Drawing::Point(644, 10);
			this->LabelPortState->Name = L"LabelPortState";
			this->LabelPortState->Size = System::Drawing::Size(98, 24);
			this->LabelPortState->TabIndex = 46;
			this->LabelPortState->Text = L"Port State";
			// 
			// TxtBoxPortNum
			// 
			this->TxtBoxPortNum->Font = (gcnew System::Drawing::Font(L"�L�n������", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->TxtBoxPortNum->Location = System::Drawing::Point(757, 8);
			this->TxtBoxPortNum->Name = L"TxtBoxPortNum";
			this->TxtBoxPortNum->Size = System::Drawing::Size(61, 43);
			this->TxtBoxPortNum->TabIndex = 45;
			this->TxtBoxPortNum->Text = L"13";
			// 
			// BtPortControl
			// 
			this->BtPortControl->BackColor = System::Drawing::SystemColors::Control;
			this->BtPortControl->Font = (gcnew System::Drawing::Font(L"�L�n������", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->BtPortControl->Location = System::Drawing::Point(824, 5);
			this->BtPortControl->Name = L"BtPortControl";
			this->BtPortControl->Size = System::Drawing::Size(80, 47);
			this->BtPortControl->TabIndex = 44;
			this->BtPortControl->Text = L"Port";
			this->BtPortControl->UseVisualStyleBackColor = false;
			this->BtPortControl->Click += gcnew System::EventHandler(this, &Form1::BtPortControl_Click);
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->Font = (gcnew System::Drawing::Font(L"�L�n������", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Label2->Location = System::Drawing::Point(358, 36);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(164, 24);
			this->Label2->TabIndex = 51;
			this->Label2->Text = L"�����W�v           Hz";
			// 
			// Label3
			// 
			this->Label3->AutoSize = true;
			this->Label3->Font = (gcnew System::Drawing::Font(L"�L�n������", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Label3->Location = System::Drawing::Point(376, 64);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(67, 24);
			this->Label3->TabIndex = 57;
			this->Label3->Text = L"�i����";
			// 
			// TimerPeriod
			// 
			this->TimerPeriod->Tick += gcnew System::EventHandler(this, &Form1::TimerPeriod_Tick);
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Form1::serialPort1_DataReceived);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"�L�n������", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(204, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 24);
			this->label4->TabIndex = 58;
			this->label4->Text = L"CH1 �� �b���`";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"�L�n������", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(204, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 24);
			this->label5->TabIndex = 59;
			this->label5->Text = L"CH2 �� �����`";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"�L�n������", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(204, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 24);
			this->label6->TabIndex = 60;
			this->label6->Text = L"CH3 �� �����`";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"�L�n������", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(204, 116);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(135, 24);
			this->label8->TabIndex = 61;
			this->label8->Text = L"CHX �� ������";
			// 
			// LabelBaudRate
			// 
			this->LabelBaudRate->AutoSize = true;
			this->LabelBaudRate->Font = (gcnew System::Drawing::Font(L"�L�n������", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->LabelBaudRate->Location = System::Drawing::Point(644, 55);
			this->LabelBaudRate->Name = L"LabelBaudRate";
			this->LabelBaudRate->Size = System::Drawing::Size(101, 24);
			this->LabelBaudRate->TabIndex = 63;
			this->LabelBaudRate->Text = L"Baud Rate";
			// 
			// TxtBoxBaudRate
			// 
			this->TxtBoxBaudRate->Font = (gcnew System::Drawing::Font(L"�L�n������", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->TxtBoxBaudRate->Location = System::Drawing::Point(757, 53);
			this->TxtBoxBaudRate->Name = L"TxtBoxBaudRate";
			this->TxtBoxBaudRate->Size = System::Drawing::Size(103, 43);
			this->TxtBoxBaudRate->TabIndex = 62;
			this->TxtBoxBaudRate->Text = L"19200";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"�L�n������", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(523, 102);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(380, 42);
			this->groupBox2->TabIndex = 62;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Develop Note";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"�L�n������", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(6, 17);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(365, 17);
			this->label10->TabIndex = 61;
			this->label10->Text = L"���˲v 64Hz ���ثe�W��, �Ū�:�W��25Hz, Sleep Time=20�̨�";
			// 
			// chkFilter
			// 
			this->chkFilter->AutoSize = true;
			this->chkFilter->Checked = true;
			this->chkFilter->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkFilter->Font = (gcnew System::Drawing::Font(L"�s�ө���", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->chkFilter->Location = System::Drawing::Point(528, 40);
			this->chkFilter->Name = L"chkFilter";
			this->chkFilter->Size = System::Drawing::Size(144, 20);
			this->chkFilter->TabIndex = 64;
			this->chkFilter->Text = L"ReadLine() Enable";
			this->chkFilter->UseVisualStyleBackColor = true;
			// 
			// txtSleep
			// 
			this->txtSleep->Font = (gcnew System::Drawing::Font(L"�s�ө���", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->txtSleep->Location = System::Drawing::Point(443, 90);
			this->txtSleep->Name = L"txtSleep";
			this->txtSleep->Size = System::Drawing::Size(34, 27);
			this->txtSleep->TabIndex = 65;
			this->txtSleep->Text = L"20";
			this->txtSleep->TextChanged += gcnew System::EventHandler(this, &Form1::txtSleep_TextChanged);
			// 
			// labelSleep
			// 
			this->labelSleep->AutoSize = true;
			this->labelSleep->Font = (gcnew System::Drawing::Font(L"�L�n������", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->labelSleep->Location = System::Drawing::Point(368, 93);
			this->labelSleep->Name = L"labelSleep";
			this->labelSleep->Size = System::Drawing::Size(72, 17);
			this->labelSleep->TabIndex = 66;
			this->labelSleep->Text = L"Sleep Time";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(915, 656);
			this->Controls->Add(this->txtSleep);
			this->Controls->Add(this->labelSleep);
			this->Controls->Add(this->chkFilter);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->LabelBaudRate);
			this->Controls->Add(this->TxtBoxBaudRate);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TxtFormOpacity);
			this->Controls->Add(this->GroupBox1);
			this->Controls->Add(this->ChkBox_DotMode);
			this->Controls->Add(this->ChkBox_LineMode);
			this->Controls->Add(this->Label1);
			this->Controls->Add(this->TxtSampleRate);
			this->Controls->Add(this->TxtScanSpeed);
			this->Controls->Add(this->PicBox1);
			this->Controls->Add(this->LabelPortState);
			this->Controls->Add(this->TxtBoxPortNum);
			this->Controls->Add(this->BtPortControl);
			this->Controls->Add(this->Label2);
			this->Controls->Add(this->Label3);
			this->Name = L"Form1";
			this->Text = L"�n��ܪi�� by �L���� mosdeo@gmail.com, programming in C++";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->GroupBox1->ResumeLayout(false);
			this->GroupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PicBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtPortControl_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (!serialPort1->IsOpen)//�p�GPort������
				 {
					 serialPort1->PortName="COM" + TxtBoxPortNum->Text;
					 serialPort1->BaudRate=Convert::ToInt32(TxtBoxBaudRate->Text); //�]�wBaud Rate
					 serialPort1->Open(); //�N�}�ҥL
					 if (serialPort1->IsOpen)//�ˬd�O�_�T��}��?
					 {
						 LabelPortState->Text="Port �w�}��";
						 TxtBoxBaudRate->Enabled=false; //����Baud Rate�]�w�\��
						 TimerPeriod->Enabled=true;
					 }
					 else
						 LabelPortState->Text="Port �L�k�}��";
				 }
				 else if (serialPort1->IsOpen)//�p�GPort�}�Ҥ�
				 {
					 serialPort1->Close(); //�N�����L
					 if (!serialPort1->IsOpen)//�ˬd�O�_�T������?
					 {
						 LabelPortState->Text="Port �w����";
						 TxtBoxBaudRate->Enabled=true; //�ҥ�Baud Rate�]�w�\��
						 TimerPeriod->Enabled=false;
					 }
					 else
						 LabelPortState->Text="Port ���L��";
				 }
				 
			 }
private: System::Void TxtSampleRate_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(""!=TxtSampleRate->Text){//����Ŧr�겣�Ϳ��~
				int Fequency=Math::Max(1,Convert::ToInt32(TxtSampleRate->Text));//����ϥΪ̿�J0 �y�����~
				TimerPeriod->Interval = -nSleep + (1000 / Fequency);//���W�v�������g��(mS),�ø��v����8051��nSleep�ɶ�
				}
		 }
private: System::Void TxtFormOpacity_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(""!=TxtFormOpacity->Text)//����Ŧr�겣�Ϳ��~
				this->Opacity=(Math::Max(0.5,Convert::ToDouble(TxtFormOpacity->Text)/100)); //�]�w�z����
		 }
private: System::Void TimerPeriod_Tick(System::Object^  sender, System::EventArgs^  e) {
			 using namespace System::Text::RegularExpressions; 
			 static int nTime;
			 float fGetVal[4]={0};
			 static float fTemp[4]={0};
			 //array<System::String ^>^ arrstrTx = gcnew array<System::String ^> {"A0","A1","A2"};
			 array<System::String^>^ arrstrTx = gcnew array<System::String ^> {"Q","R","S"};

			 const int Channel=3;
			 //Regex patten = gcnew Regex([0-3][A-Fa-f0-9]{2});

			//ø�ϰϪ�l��
			//Graphics gScreen=gcnew Graphics
			Graphics^ gScreen = this->CreateGraphics();//�ŧi�e��gScreen
			gScreen = PicBox1->CreateGraphics();//�s��PicBox1�PgScreen

			//�ŧi�Y���C��P�ʲӪ��e��
			Pen^ pGreen=gcnew Pen(Color::LawnGreen,1);	//CH1
			Pen^ pYellow=gcnew Pen(Color::Yellow,1);	//CH2
			Pen^ pBlue=gcnew Pen(Color::Aqua,1);		//CH3
			Pen^ pRed=gcnew Pen(Color::Red,1);		//�[�`
			serialPort1->DiscardOutBuffer(); //�M��
			//serialPort1->ReceivedBytesThreshold = 3; //3�Ӧr���NĲ�o

			//���q�D0~2
			//for(ch=0;ch<Channel;++ch)
			//{
			//	serialPort1->Write(arrstrTx[ch]); //�V8051�e�X�ШD���O
			//	System::Threading::Thread::Sleep(nSleep);//��,�֩�1mS�|����Ŧr��
			//	if(chkFilter->Checked)
			//		strRx[ch] = serialPort1->ReadLine();//��Buffer�̪��F��A���즳����r������
			//	else
			//	{
			//		strRx[ch] = serialPort1->ReadExisting();//����Buffer�̪��F��A���ަ��h��
			//	}
			//}
			System::String^ strRxAll;
			serialPort1->Write("3"); //�V8051�e�X�ШD���O
			System::Threading::Thread::Sleep(nSleep);//��,�֩�1mS�|����Ŧr��
			if(chkFilter->Checked)
				strRxAll = serialPort1->ReadLine();//��Buffer�̪��F��A���즳����r������
			else
				strRxAll = serialPort1->ReadExisting();//����Buffer�̪��F��A���ަ��h��

			//���Ƥ��Ψ�U�q�D�h
			for(int i=0;i<Channel;++i)
				strRx[i]=strRxAll->Substring(i*3,3);
			//strRx[2]=strRxAll->Substring(6,3);
			//strRx[1]=strRxAll->Substring(3,3);
			//strRx[0]=strRxAll->Substring(0,3);

			//�r����~�ư��P�ഫ
			for(int i=0;i<Channel;++i)
			{
				if(""==strRx[i])strRx[i] = "00"; //����
				fGetVal[i] =(float)int::Parse(strRx[i],System::Globalization::NumberStyles::HexNumber);
			}
			 

			Label_Hex->Text = "0x" + strRx[0];
			Label_Dec->Text = Convert::ToString(fGetVal[0]);
			Label_Hex1->Text = "0x" + strRx[1];
			Label_Dec1->Text = Convert::ToString(fGetVal[1]);
			Label_Hex2->Text = "0x" + strRx[2];
			Label_Dec2->Text = Convert::ToString(fGetVal[2]);

			 
			 
			fGetVal[3]=(fGetVal[0]+fGetVal[1]+fGetVal[2]);
			Label_Dec_Total->Text = Convert::ToString((int)fGetVal[3]);
			fGetVal[3]=fGetVal[3]/3.0f;

			for(int i=0;i<Channel+1;++i)
			{
				int nX_1, nX_2; //�ɶ��ǦC�ξ��
				float fY_1, fY_2; //Ū���ƭȥίB�I��
				//�W�Ӯɶ��I���ƭ�
				nX_1 = nTime - Convert::ToInt32(TxtScanSpeed->Text);
				fY_1 = fTemp[i];

				//�o�Ӯɶ��I���ƭ�
				nX_2 = nTime;
				fY_2 = (fGetVal[i] * ((float)PicBox1->Height / (1023+10))); //+10ø�Ϥ~���|�W�X�u�~�d��

				if(ChkBox_LineMode->Checked)//�e���u
				{
					switch(i)
					{
						case 0:
						gScreen->DrawLine(pGreen, (float)nX_1,fY_1, (float)nX_2,fY_2);
						break;
						case 1:
							gScreen->DrawLine(pYellow, (float)nX_1,fY_1, (float)nX_2,fY_2);
							break;
						case 2:
							gScreen->DrawLine(pBlue, (float)nX_1,fY_1, (float)nX_2,fY_2);
							break;
						case 3:
							gScreen->DrawLine(pRed, (float)nX_1,fY_1, (float)nX_2,fY_2);
							break;
					}
				}
				if(ChkBox_DotMode->Checked)//�e�I(���)(�e���C��,x2,y2,�e,��)
					gScreen->DrawEllipse(gcnew Pen(Color::Gold,1),nX_2, (int)fY_2, 5, 5);



				fTemp[i] = fY_2; //�ѤU�@�P���ϥ�,nGetVal*(PicBox1.Height/1023)�٭n�A���s�p��@��,�ҥH�ey2�Ȧs�i�ֺ�@��
			}

			if (nTime < PicBox1->Width)
				nTime += Convert::ToInt32(TxtScanSpeed->Text);//�ɶ����i
			else
			{
				gScreen->Clear(Color::FromArgb(0,0,0));//�M���e��
				nTime = 0;
			}
					gScreen-> ~Graphics();
					pGreen-> ~Pen();
		 }
private: System::Void TxtScanSpeed_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(""==TxtScanSpeed->Text)//����Ŧr�겣�Ϳ��~
				 TxtScanSpeed->Text="0";
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
			 //strRx[ch] = serialPort1->ReadExisting();//����Buffer�̪��F��A���ަ��h��
		 }
private: System::Void txtSleep_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			  if(""!=txtSleep->Text)//����Ŧr�겣�Ϳ��~
				  nSleep=Convert::ToInt32(txtSleep->Text);
		 }
};
}
