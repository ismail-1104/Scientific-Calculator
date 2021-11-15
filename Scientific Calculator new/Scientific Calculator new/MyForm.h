#pragma once

namespace ScientificCalculatornew {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    protected:
    private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ standardToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ scientificToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ historyToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ historyToolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^ temperatureToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
    private: System::Windows::Forms::TextBox^ txtDisplay;

    private: System::Windows::Forms::Button^ btn7;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ btnC;

    private: System::Windows::Forms::Button^ btnCE;

    private: System::Windows::Forms::Button^ btn8;
    private: System::Windows::Forms::Button^ btn9;



    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ btn5;
    private: System::Windows::Forms::Button^ btn6;


    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ btn4;

    private: System::Windows::Forms::Button^ btn2;
    private: System::Windows::Forms::Button^ btn3;


    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ btn1;

    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ btn0;

    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Button^ button22;
    private: System::Windows::Forms::Button^ button23;
    private: System::Windows::Forms::Button^ button24;
    private: System::Windows::Forms::Button^ button25;
    private: System::Windows::Forms::Button^ button26;
    private: System::Windows::Forms::Button^ button27;
    private: System::Windows::Forms::Button^ button28;
    private: System::Windows::Forms::Button^ button29;
    private: System::Windows::Forms::Button^ button30;
    private: System::Windows::Forms::Button^ button31;
    private: System::Windows::Forms::Button^ button32;
    private: System::Windows::Forms::Button^ button33;
    private: System::Windows::Forms::Button^ button34;
    private: System::Windows::Forms::Button^ button35;
    private: System::Windows::Forms::Button^ button36;
    private: System::Windows::Forms::Button^ button37;
    private: System::Windows::Forms::Button^ button38;
    private: System::Windows::Forms::Button^ button39;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ lblShowOp;
    private: System::Windows::Forms::ListBox^ listBox1;
    private: System::Windows::Forms::TextBox^ txtConvert;


    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::RadioButton^ radioButton3;
    private: System::Windows::Forms::RadioButton^ radioButton2;
    private: System::Windows::Forms::RadioButton^ radioButton1;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ lblConvert;



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
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->historyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->temperatureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
            this->btn7 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->btnC = (gcnew System::Windows::Forms::Button());
            this->btnCE = (gcnew System::Windows::Forms::Button());
            this->btn8 = (gcnew System::Windows::Forms::Button());
            this->btn9 = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->btn5 = (gcnew System::Windows::Forms::Button());
            this->btn6 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->btn4 = (gcnew System::Windows::Forms::Button());
            this->btn2 = (gcnew System::Windows::Forms::Button());
            this->btn3 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->btn1 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->btn0 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->button28 = (gcnew System::Windows::Forms::Button());
            this->button29 = (gcnew System::Windows::Forms::Button());
            this->button30 = (gcnew System::Windows::Forms::Button());
            this->button31 = (gcnew System::Windows::Forms::Button());
            this->button32 = (gcnew System::Windows::Forms::Button());
            this->button33 = (gcnew System::Windows::Forms::Button());
            this->button34 = (gcnew System::Windows::Forms::Button());
            this->button35 = (gcnew System::Windows::Forms::Button());
            this->button36 = (gcnew System::Windows::Forms::Button());
            this->button37 = (gcnew System::Windows::Forms::Button());
            this->button38 = (gcnew System::Windows::Forms::Button());
            this->button39 = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->txtConvert = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->lblShowOp = (gcnew System::Windows::Forms::Label());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->lblConvert = (gcnew System::Windows::Forms::TextBox());
            this->menuStrip1->SuspendLayout();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(1174, 24);
            this->menuStrip1->TabIndex = 0;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
                this->standardToolStripMenuItem,
                    this->scientificToolStripMenuItem, this->historyToolStripMenuItem, this->historyToolStripMenuItem1, this->temperatureToolStripMenuItem,
                    this->exitToolStripMenuItem
            });
            this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
            this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
            this->fileToolStripMenuItem->Text = L"File";
            // 
            // standardToolStripMenuItem
            // 
            this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
            this->standardToolStripMenuItem->Size = System::Drawing::Size(140, 22);
            this->standardToolStripMenuItem->Text = L"Standard";
            this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardToolStripMenuItem_Click);
            // 
            // scientificToolStripMenuItem
            // 
            this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
            this->scientificToolStripMenuItem->Size = System::Drawing::Size(140, 22);
            this->scientificToolStripMenuItem->Text = L"Scientific";
            this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::scientificToolStripMenuItem_Click);
            // 
            // historyToolStripMenuItem
            // 
            this->historyToolStripMenuItem->Checked = true;
            this->historyToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
            this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
            this->historyToolStripMenuItem->Size = System::Drawing::Size(140, 22);
            this->historyToolStripMenuItem->Text = L"History";
            this->historyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem_Click);
            // 
            // historyToolStripMenuItem1
            // 
            this->historyToolStripMenuItem1->Name = L"historyToolStripMenuItem1";
            this->historyToolStripMenuItem1->Size = System::Drawing::Size(140, 22);
            this->historyToolStripMenuItem1->Text = L"History";
            this->historyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem1_Click);
            // 
            // temperatureToolStripMenuItem
            // 
            this->temperatureToolStripMenuItem->Name = L"temperatureToolStripMenuItem";
            this->temperatureToolStripMenuItem->Size = System::Drawing::Size(140, 22);
            this->temperatureToolStripMenuItem->Text = L"Temperature";
            this->temperatureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::temperatureToolStripMenuItem_Click);
            // 
            // exitToolStripMenuItem
            // 
            this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
            this->exitToolStripMenuItem->Size = System::Drawing::Size(140, 22);
            this->exitToolStripMenuItem->Text = L"Exit";
            this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
            // 
            // txtDisplay
            // 
            this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtDisplay->Location = System::Drawing::Point(12, 37);
            this->txtDisplay->Multiline = true;
            this->txtDisplay->Name = L"txtDisplay";
            this->txtDisplay->Size = System::Drawing::Size(286, 57);
            this->txtDisplay->TabIndex = 1;
            this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // btn7
            // 
            this->btn7->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->btn7->Location = System::Drawing::Point(12, 100);
            this->btn7->Name = L"btn7";
            this->btn7->Size = System::Drawing::Size(67, 63);
            this->btn7->TabIndex = 2;
            this->btn7->Text = L"";
            this->btn7->UseVisualStyleBackColor = true;
            this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(231, 100);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(67, 63);
            this->button1->TabIndex = 3;
            this->button1->Text = L"±";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // btnC
            // 
            this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnC->Location = System::Drawing::Point(158, 100);
            this->btnC->Name = L"btnC";
            this->btnC->Size = System::Drawing::Size(67, 63);
            this->btnC->TabIndex = 4;
            this->btnC->Text = L"C";
            this->btnC->UseVisualStyleBackColor = true;
            this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
            // 
            // btnCE
            // 
            this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCE->Location = System::Drawing::Point(85, 100);
            this->btnCE->Name = L"btnCE";
            this->btnCE->Size = System::Drawing::Size(67, 63);
            this->btnCE->TabIndex = 5;
            this->btnCE->Text = L"CE";
            this->btnCE->UseVisualStyleBackColor = true;
            this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
            // 
            // btn8
            // 
            this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn8->Location = System::Drawing::Point(85, 169);
            this->btn8->Name = L"btn8";
            this->btn8->Size = System::Drawing::Size(67, 63);
            this->btn8->TabIndex = 21;
            this->btn8->Text = L"8";
            this->btn8->UseVisualStyleBackColor = true;
            this->btn8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
            // 
            // btn9
            // 
            this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn9->Location = System::Drawing::Point(158, 169);
            this->btn9->Name = L"btn9";
            this->btn9->Size = System::Drawing::Size(67, 63);
            this->btn9->TabIndex = 20;
            this->btn9->Text = L"9";
            this->btn9->UseVisualStyleBackColor = true;
            this->btn9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
            // 
            // button19
            // 
            this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button19->Location = System::Drawing::Point(12, 169);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(67, 63);
            this->button19->TabIndex = 18;
            this->button19->Text = L"7";
            this->button19->UseVisualStyleBackColor = true;
            this->button19->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
            // 
            // btn5
            // 
            this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn5->Location = System::Drawing::Point(85, 238);
            this->btn5->Name = L"btn5";
            this->btn5->Size = System::Drawing::Size(67, 63);
            this->btn5->TabIndex = 25;
            this->btn5->Text = L"5";
            this->btn5->UseVisualStyleBackColor = true;
            this->btn5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
            // 
            // btn6
            // 
            this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn6->Location = System::Drawing::Point(158, 238);
            this->btn6->Name = L"btn6";
            this->btn6->Size = System::Drawing::Size(67, 63);
            this->btn6->TabIndex = 24;
            this->btn6->Text = L"6";
            this->btn6->UseVisualStyleBackColor = true;
            this->btn6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
            // 
            // button6
            // 
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(231, 238);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(67, 63);
            this->button6->TabIndex = 23;
            this->button6->Text = L"-";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
            // 
            // btn4
            // 
            this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn4->Location = System::Drawing::Point(12, 238);
            this->btn4->Name = L"btn4";
            this->btn4->Size = System::Drawing::Size(67, 63);
            this->btn4->TabIndex = 22;
            this->btn4->Text = L"4";
            this->btn4->UseVisualStyleBackColor = true;
            this->btn4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
            // 
            // btn2
            // 
            this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn2->Location = System::Drawing::Point(85, 307);
            this->btn2->Name = L"btn2";
            this->btn2->Size = System::Drawing::Size(67, 63);
            this->btn2->TabIndex = 29;
            this->btn2->Text = L"2";
            this->btn2->UseVisualStyleBackColor = true;
            this->btn2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
            // 
            // btn3
            // 
            this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn3->Location = System::Drawing::Point(158, 307);
            this->btn3->Name = L"btn3";
            this->btn3->Size = System::Drawing::Size(67, 63);
            this->btn3->TabIndex = 28;
            this->btn3->Text = L"3";
            this->btn3->UseVisualStyleBackColor = true;
            this->btn3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
            // 
            // button10
            // 
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(231, 307);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(67, 63);
            this->button10->TabIndex = 27;
            this->button10->Text = L"*";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
            // 
            // btn1
            // 
            this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn1->Location = System::Drawing::Point(12, 307);
            this->btn1->Name = L"btn1";
            this->btn1->Size = System::Drawing::Size(67, 63);
            this->btn1->TabIndex = 26;
            this->btn1->Text = L"1";
            this->btn1->UseVisualStyleBackColor = true;
            this->btn1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
            // 
            // button12
            // 
            this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->Location = System::Drawing::Point(85, 376);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(67, 63);
            this->button12->TabIndex = 33;
            this->button12->Text = L".";
            this->button12->UseVisualStyleBackColor = true;
            this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
            // 
            // button13
            // 
            this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button13->Location = System::Drawing::Point(158, 376);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(67, 63);
            this->button13->TabIndex = 32;
            this->button13->Text = L"=";
            this->button13->UseVisualStyleBackColor = true;
            this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
            // 
            // button14
            // 
            this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->Location = System::Drawing::Point(231, 376);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(67, 63);
            this->button14->TabIndex = 31;
            this->button14->Text = L"/";
            this->button14->UseVisualStyleBackColor = true;
            this->button14->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
            // 
            // btn0
            // 
            this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn0->Location = System::Drawing::Point(12, 376);
            this->btn0->Name = L"btn0";
            this->btn0->Size = System::Drawing::Size(67, 63);
            this->btn0->TabIndex = 30;
            this->btn0->Text = L"0";
            this->btn0->UseVisualStyleBackColor = true;
            this->btn0->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
            // 
            // button20
            // 
            this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button20->Location = System::Drawing::Point(406, 376);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(67, 63);
            this->button20->TabIndex = 53;
            this->button20->Text = L"Mod";
            this->button20->UseVisualStyleBackColor = true;
            // 
            // button21
            // 
            this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button21->Location = System::Drawing::Point(479, 376);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(67, 63);
            this->button21->TabIndex = 52;
            this->button21->Text = L"Hex";
            this->button21->UseVisualStyleBackColor = true;
            this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
            // 
            // button22
            // 
            this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button22->Location = System::Drawing::Point(552, 376);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(67, 63);
            this->button22->TabIndex = 51;
            this->button22->Text = L"%";
            this->button22->UseVisualStyleBackColor = true;
            this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
            // 
            // button23
            // 
            this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button23->Location = System::Drawing::Point(333, 376);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(67, 63);
            this->button23->TabIndex = 50;
            this->button23->Text = L"Exp";
            this->button23->UseVisualStyleBackColor = true;
            // 
            // button24
            // 
            this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button24->Location = System::Drawing::Point(406, 307);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(67, 63);
            this->button24->TabIndex = 49;
            this->button24->Text = L"Tan";
            this->button24->UseVisualStyleBackColor = true;
            this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
            // 
            // button25
            // 
            this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button25->Location = System::Drawing::Point(479, 307);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(67, 63);
            this->button25->TabIndex = 48;
            this->button25->Text = L"Oct";
            this->button25->UseVisualStyleBackColor = true;
            this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
            // 
            // button26
            // 
            this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button26->Location = System::Drawing::Point(552, 307);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(67, 63);
            this->button26->TabIndex = 47;
            this->button26->Text = L"Lnx";
            this->button26->UseVisualStyleBackColor = true;
            this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
            // 
            // button27
            // 
            this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button27->Location = System::Drawing::Point(333, 307);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(67, 63);
            this->button27->TabIndex = 46;
            this->button27->Text = L"Tanh";
            this->button27->UseVisualStyleBackColor = true;
            this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
            // 
            // button28
            // 
            this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button28->Location = System::Drawing::Point(406, 238);
            this->button28->Name = L"button28";
            this->button28->Size = System::Drawing::Size(67, 63);
            this->button28->TabIndex = 45;
            this->button28->Text = L"Cos";
            this->button28->UseVisualStyleBackColor = true;
            this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
            // 
            // button29
            // 
            this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button29->Location = System::Drawing::Point(479, 238);
            this->button29->Name = L"button29";
            this->button29->Size = System::Drawing::Size(67, 63);
            this->button29->TabIndex = 44;
            this->button29->Text = L"Bin";
            this->button29->UseVisualStyleBackColor = true;
            this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
            // 
            // button30
            // 
            this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button30->Location = System::Drawing::Point(552, 238);
            this->button30->Name = L"button30";
            this->button30->Size = System::Drawing::Size(67, 63);
            this->button30->TabIndex = 43;
            this->button30->Text = L"1/x";
            this->button30->UseVisualStyleBackColor = true;
            this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
            // 
            // button31
            // 
            this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button31->Location = System::Drawing::Point(333, 238);
            this->button31->Name = L"button31";
            this->button31->Size = System::Drawing::Size(67, 63);
            this->button31->TabIndex = 42;
            this->button31->Text = L"Cosh";
            this->button31->UseVisualStyleBackColor = true;
            this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
            // 
            // button32
            // 
            this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button32->Location = System::Drawing::Point(406, 169);
            this->button32->Name = L"button32";
            this->button32->Size = System::Drawing::Size(67, 63);
            this->button32->TabIndex = 41;
            this->button32->Text = L"Sin";
            this->button32->UseVisualStyleBackColor = true;
            this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
            // 
            // button33
            // 
            this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button33->Location = System::Drawing::Point(479, 169);
            this->button33->Name = L"button33";
            this->button33->Size = System::Drawing::Size(67, 63);
            this->button33->TabIndex = 40;
            this->button33->Text = L"Dec";
            this->button33->UseVisualStyleBackColor = true;
            this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
            // 
            // button34
            // 
            this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button34->Location = System::Drawing::Point(552, 169);
            this->button34->Name = L"button34";
            this->button34->Size = System::Drawing::Size(67, 63);
            this->button34->TabIndex = 39;
            this->button34->Text = L"x^3";
            this->button34->UseVisualStyleBackColor = true;
            this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
            // 
            // button35
            // 
            this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button35->Location = System::Drawing::Point(333, 169);
            this->button35->Name = L"button35";
            this->button35->Size = System::Drawing::Size(67, 63);
            this->button35->TabIndex = 38;
            this->button35->Text = L"Sinh";
            this->button35->UseVisualStyleBackColor = true;
            this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
            // 
            // button36
            // 
            this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button36->Location = System::Drawing::Point(406, 100);
            this->button36->Name = L"button36";
            this->button36->Size = System::Drawing::Size(67, 63);
            this->button36->TabIndex = 37;
            this->button36->Text = L"Logx";
            this->button36->UseVisualStyleBackColor = true;
            this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
            // 
            // button37
            // 
            this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button37->Location = System::Drawing::Point(479, 100);
            this->button37->Name = L"button37";
            this->button37->Size = System::Drawing::Size(67, 63);
            this->button37->TabIndex = 36;
            this->button37->Text = L"Sqrt";
            this->button37->UseVisualStyleBackColor = true;
            this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
            // 
            // button38
            // 
            this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button38->Location = System::Drawing::Point(552, 100);
            this->button38->Name = L"button38";
            this->button38->Size = System::Drawing::Size(67, 63);
            this->button38->TabIndex = 35;
            this->button38->Text = L"x^2";
            this->button38->UseVisualStyleBackColor = true;
            this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
            // 
            // button39
            // 
            this->button39->Font = (gcnew System::Drawing::Font(L"Centaur", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button39->Location = System::Drawing::Point(333, 100);
            this->button39->Name = L"button39";
            this->button39->Size = System::Drawing::Size(67, 63);
            this->button39->TabIndex = 34;
            this->button39->Text = L"π";
            this->button39->UseVisualStyleBackColor = true;
            this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->lblConvert);
            this->panel1->Controls->Add(this->button4);
            this->panel1->Controls->Add(this->button3);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->txtConvert);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->radioButton3);
            this->panel1->Controls->Add(this->radioButton2);
            this->panel1->Controls->Add(this->radioButton1);
            this->panel1->Location = System::Drawing::Point(641, 40);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(521, 398);
            this->panel1->TabIndex = 54;
            // 
            // button4
            // 
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(371, 308);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(120, 70);
            this->button4->TabIndex = 8;
            this->button4->Text = L"Reset";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // button3
            // 
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(43, 308);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(120, 70);
            this->button3->TabIndex = 7;
            this->button3->Text = L"Convert";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(47, 247);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(68, 24);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Result";
            // 
            // txtConvert
            // 
            this->txtConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtConvert->Location = System::Drawing::Point(376, 22);
            this->txtConvert->Multiline = true;
            this->txtConvert->Name = L"txtConvert";
            this->txtConvert->Size = System::Drawing::Size(115, 28);
            this->txtConvert->TabIndex = 4;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(33, 22);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(214, 24);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Enter value to convert";
            // 
            // radioButton3
            // 
            this->radioButton3->AutoSize = true;
            this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton3->Location = System::Drawing::Point(43, 190);
            this->radioButton3->Name = L"radioButton3";
            this->radioButton3->Size = System::Drawing::Size(85, 28);
            this->radioButton3->TabIndex = 2;
            this->radioButton3->TabStop = true;
            this->radioButton3->Text = L"Kelvin";
            this->radioButton3->UseVisualStyleBackColor = true;
            this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
            // 
            // radioButton2
            // 
            this->radioButton2->AutoSize = true;
            this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton2->Location = System::Drawing::Point(43, 130);
            this->radioButton2->Name = L"radioButton2";
            this->radioButton2->Size = System::Drawing::Size(226, 28);
            this->radioButton2->TabIndex = 1;
            this->radioButton2->TabStop = true;
            this->radioButton2->Text = L"Fahrenheit to Celsius";
            this->radioButton2->UseVisualStyleBackColor = true;
            this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
            // 
            // radioButton1
            // 
            this->radioButton1->AutoSize = true;
            this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton1->Location = System::Drawing::Point(43, 70);
            this->radioButton1->Name = L"radioButton1";
            this->radioButton1->Size = System::Drawing::Size(226, 28);
            this->radioButton1->TabIndex = 0;
            this->radioButton1->TabStop = true;
            this->radioButton1->Text = L"Celsius to Fahrenheit";
            this->radioButton1->UseVisualStyleBackColor = true;
            this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(231, 171);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(67, 63);
            this->button2->TabIndex = 55;
            this->button2->Text = L"+";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
            // 
            // lblShowOp
            // 
            this->lblShowOp->AutoSize = true;
            this->lblShowOp->Location = System::Drawing::Point(19, 43);
            this->lblShowOp->Name = L"lblShowOp";
            this->lblShowOp->Size = System::Drawing::Size(35, 13);
            this->lblShowOp->TabIndex = 56;
            this->lblShowOp->Text = L"label1";
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(12, 445);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(286, 95);
            this->listBox1->TabIndex = 57;
            // 
            // lblConvert
            // 
            this->lblConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblConvert->Location = System::Drawing::Point(371, 231);
            this->lblConvert->Multiline = true;
            this->lblConvert->Name = L"lblConvert";
            this->lblConvert->Size = System::Drawing::Size(120, 40);
            this->lblConvert->TabIndex = 9;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1174, 558);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->lblShowOp);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->button20);
            this->Controls->Add(this->button21);
            this->Controls->Add(this->button22);
            this->Controls->Add(this->button23);
            this->Controls->Add(this->button24);
            this->Controls->Add(this->button25);
            this->Controls->Add(this->button26);
            this->Controls->Add(this->button27);
            this->Controls->Add(this->button28);
            this->Controls->Add(this->button29);
            this->Controls->Add(this->button30);
            this->Controls->Add(this->button31);
            this->Controls->Add(this->button32);
            this->Controls->Add(this->button33);
            this->Controls->Add(this->button34);
            this->Controls->Add(this->button35);
            this->Controls->Add(this->button36);
            this->Controls->Add(this->button37);
            this->Controls->Add(this->button38);
            this->Controls->Add(this->button39);
            this->Controls->Add(this->button12);
            this->Controls->Add(this->button13);
            this->Controls->Add(this->button14);
            this->Controls->Add(this->btn0);
            this->Controls->Add(this->btn2);
            this->Controls->Add(this->btn3);
            this->Controls->Add(this->button10);
            this->Controls->Add(this->btn1);
            this->Controls->Add(this->btn5);
            this->Controls->Add(this->btn6);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->btn4);
            this->Controls->Add(this->btn8);
            this->Controls->Add(this->btn9);
            this->Controls->Add(this->button19);
            this->Controls->Add(this->btnCE);
            this->Controls->Add(this->btnC);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->btn7);
            this->Controls->Add(this->txtDisplay);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        double iFirstnum;
        double iSecondnum;
        double iResult;
        double a;
        String^ iOperator;
        float iCelcius, iFahrenheit, iKelvin;
        char iOperation;


    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

        MyForm::Width = 320;
        MyForm::Height = 480;
        txtDisplay->Width = 286;
        historyToolStripMenuItem->Visible = false;
    }
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

    Application::Exit();
}
private: System::Void scientificToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

    MyForm::Width = 650;
    txtDisplay->Width = 556;
}
private: System::Void temperatureToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

    MyForm::Width = 1161;
    txtDisplay->Width = 556;
}
private: System::Void standardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

    MyForm::Width = 320;
    MyForm::Height = 480;
    txtDisplay->Width = 286;
    historyToolStripMenuItem->Visible = false;
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {

    //Cosh
    a = Double::Parse(txtDisplay->Text);
    lblShowOp->Text = System::Convert::ToString("cosh" + "(" + (txtDisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Cosh(a);
    txtDisplay->Text = System::Convert::ToString(a);
    lblShowOp->Text = "";

}
private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {

    Button^ Numbers = safe_cast<Button^>(sender);

    if (txtDisplay->Text == "0") {

        txtDisplay->Text = Numbers->Text;
    }
    else {
        txtDisplay->Text = txtDisplay->Text + Numbers->Text;
    }
}
private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {

    txtDisplay->Clear();
}
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
    txtDisplay->Clear();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!txtDisplay->Text->Contains(".")) {

        txtDisplay->Text = txtDisplay->Text + ".";
    }
}
private: System::Void Arithmetic_Op(System::Object^ sender, System::EventArgs^ e) {

    Button^ op = safe_cast<Button^>(sender);

    iFirstnum = Double::Parse(txtDisplay->Text);
    txtDisplay->Text = "";
    iOperator = op->Text;
    lblShowOp->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

    // Plus Minus
    if (!txtDisplay->Text->Contains("-")) {

        txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
    }
    else {

        txtDisplay->Text = "-" + txtDisplay->Text;
    }
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
    
    //lblShowOp->Text = "";
    iSecondnum = Double::Parse(txtDisplay->Text);

    if (iOperator == "+") {

        iResult = iFirstnum + iSecondnum;
        txtDisplay->Text = System::Convert::ToString(iResult);
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    }

    else if (iOperator == "-") {

        iResult = iFirstnum - iSecondnum;
        txtDisplay->Text = System::Convert::ToString(iResult);
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    }

    else if (iOperator == "*") {

        iResult = iFirstnum * iSecondnum;
        txtDisplay->Text = System::Convert::ToString(iResult);
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    }

    else if (iOperator == "/") {

        iResult = iFirstnum / iSecondnum;
        txtDisplay->Text = System::Convert::ToString(iResult);
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    }

    else if (iOperator == "Mod") {

        int iFirst, iSecond, iResults;
        iFirst = Convert::ToInt32(iFirstnum);
        iSecond = Convert::ToInt32(iSecondnum);
        iResults = iFirst % iSecond;
        txtDisplay->Text = System::Convert::ToString(iResults);
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    }

    else if (iOperator == "Exp") {

        iResult = (iFirstnum, (1 / iSecondnum));
        txtDisplay->Text = System::Convert::ToString(Math::Exp((iResult)));
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    }
}
private: System::Void historyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

    historyToolStripMenuItem->Visible = true;
    listBox1->Width = 256;
    listBox1->Visible = false;
    MyForm::Height = 480;
    historyToolStripMenuItem->Visible = false;
}
private: System::Void historyToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

    if (historyToolStripMenuItem->Checked == true) {

        listBox1->Visible = true;
        historyToolStripMenuItem->Visible = false;
        historyToolStripMenuItem->Visible = true;
        MyForm::Height = 630;
    }
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {

    //Backspace

    if (txtDisplay->Text->Length > 0) {

        txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
    }
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {

    txtDisplay->Text = ("3.14159");
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {

    //Log
    a = Double::Parse(txtDisplay->Text);
    lblShowOp->Text = System::Convert::ToString("log " + "(" + (txtDisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Log(a);
    txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {

    //Sqrt
    a = Double::Parse(txtDisplay->Text);
    a = Math::Sqrt(a);
    txtDisplay->Text = System::Convert::ToString(a);
    listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {

    //Sinh
    a = Double::Parse(txtDisplay->Text);
    lblShowOp->Text = System::Convert::ToString("sinh " + "(" + (txtDisplay->Text) + ")");
    a = Math::Sinh(a);
    txtDisplay->Text = System::Convert::ToString(a);
    listBox1->Items->Add(lblShowOp->Text);
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {

    //Sin
    a = Double::Parse(txtDisplay->Text);
    lblShowOp->Text = System::Convert::ToString("sin " + "(" + (txtDisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Sin(a);
    txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {

    //Decimal
    int a = int::Parse(txtDisplay->Text);
    txtDisplay->Text = System::Convert::ToString(a);
    listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {

    //Cos
    a = Double::Parse(txtDisplay->Text);
    lblShowOp->Text = System::Convert::ToString("cos" + "(" + (txtDisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Cos(a);
    txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {

    //Binary
    int a = int::Parse(txtDisplay->Text);
    txtDisplay->Text = System::Convert::ToString(a, 2);
    lblShowOp->Text = "";
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {

    //Tanh
    a = Double::Parse(txtDisplay->Text);
    lblShowOp->Text = System::Convert::ToString("tanh" + "(" + (txtDisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Tanh(a);
    txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {

    //Tan
    a = Double::Parse(txtDisplay->Text);
    lblShowOp->Text = System::Convert::ToString("tan" + "(" + (txtDisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Tan(a);
    txtDisplay->Text = System::Convert::ToString(a);
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {

    //Hex
    int a = int::Parse(txtDisplay->Text);
    txtDisplay->Text = System::Convert::ToString(a, 16);
    lblShowOp->Text = "";
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {

    //Oct
    int a = int::Parse(txtDisplay->Text);
    txtDisplay->Text = System::Convert::ToString(a, 8);
    lblShowOp->Text = "";
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {

    //x^2
    a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
    txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {

    //x^3
    a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
    txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {

    //1/x
    a = Convert::ToDouble(1.0 / Convert::ToDouble(txtDisplay->Text));
    txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {

    //ln
    a = System::Math::Log(Convert::ToDouble(txtDisplay->Text));
    txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {

    //%
    a = Convert::ToDouble(txtDisplay->Text) / Convert::ToDouble(100);
    txtDisplay->Text = Convert::ToString(a);
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

    iOperation = 'C';
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

    iOperation = 'F';
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

    iOperation = 'K';
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

    //Convert

    switch (iOperation) {

    case 'C':
        //Celcius to Fahrenheit
        (float::TryParse(txtConvert->Text, iCelcius));
        lblConvert->Text = ((((9 * iCelcius) / 5) + 32).ToString());

        break;

    case 'F':
        //Celcius to Fahrenheit
        (float::TryParse(txtConvert->Text, iFahrenheit));
        lblConvert->Text = ((((iFahrenheit - 32) * 5) / 9).ToString());

        break;

    case 'K':
        //Celcius to Fahrenheit
        (float::TryParse(txtConvert->Text, iKelvin));
        lblConvert->Text = (((((9 * iKelvin) / 5) + 32) + 273.15).ToString());

        break;
    }
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

    //reset
    lblConvert->Text = "";
    txtConvert->Text = "";
    radioButton1->Checked = false;
    radioButton2->Checked = false;
    radioButton3->Checked = false;
}
};
}
