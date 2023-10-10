#pragma once
#include <string>
#include <ctime>
#include "password_clr.h"

namespace ISForms11 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int alphabet_power = 0;
	int password_length = 0;
	bool _up = false;
	bool _lw = false;
	bool _nm = false;
	bool _sp = false;
	float p = 0;//0.0000001
	int t = 0;//20*24*60=28800
	int v = 0;//20
	float smin;
	float sreal;


	
	/// <summary>
	/// Сводка для IS_Form
	/// </summary>
	public ref class IS_Form : public System::Windows::Forms::Form
	{
	public:
		IS_Form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~IS_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 39);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(146, 20);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Прописные буквы";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &IS_Form::checkBox1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"---";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(12, 65);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(137, 20);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Строчные буквы";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &IS_Form::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(12, 91);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(74, 20);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"Цифры";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &IS_Form::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(12, 117);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(178, 20);
			this->checkBox4->TabIndex = 5;
			this->checkBox4->Text = L"Специальные символы";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &IS_Form::checkBox4_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Мощность алфавита";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(215, 22);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Используемые символы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(22, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 22);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Длина пароля";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(84, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"---";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &IS_Form::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(119, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &IS_Form::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(619, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(228, 22);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Сгенерированные пароли";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(623, 39);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(224, 148);
			this->textBox1->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(671, 198);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"GENERATE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &IS_Form::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(252, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 22);
			this->label7->TabIndex = 15;
			this->label7->Text = L"P";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(304, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 16;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &IS_Form::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(304, 40);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 18;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &IS_Form::textBox3_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(252, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 22);
			this->label8->TabIndex = 17;
			this->label8->Text = L"V";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(304, 68);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 20;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &IS_Form::textBox4_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(252, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 22);
			this->label9->TabIndex = 19;
			this->label9->Text = L"T";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(252, 103);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(302, 22);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Минимальное количество паролей";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(385, 140);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 16);
			this->label11->TabIndex = 22;
			this->label11->Text = L"---";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(385, 202);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 16);
			this->label12->TabIndex = 24;
			this->label12->Text = L"---";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(276, 165);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(261, 22);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Текущее количество паролей";
			this->label13->Click += gcnew System::EventHandler(this, &IS_Form::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(22, 271);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 20);
			this->label14->TabIndex = 25;
			// 
			// IS_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 316);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Name = L"IS_Form";
			this->Text = L"Калинкин_Вариант_№5";
			this->Load += gcnew System::EventHandler(this, &IS_Form::IS_Form_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &IS_Form::IS_Form_KeyDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &IS_Form::IS_Form_MouseMove);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox1->CheckState == CheckState::Checked)
		{
			alphabet_power += 26;
			_up = true;
		}
		else
		{
			alphabet_power -= 26;
			_up = false;
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (checkBox2->CheckState == CheckState::Checked)
		{
			alphabet_power += 26;
			_lw = true;
		}
		else
		{
			alphabet_power -= 26;
			_lw = false;
		}
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox3->CheckState == CheckState::Checked)
		{
			alphabet_power += 10;
			_nm = true;
		}
		else
		{
			alphabet_power -= 10;
			_nm = false;
		}
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox4->CheckState == CheckState::Checked)
		{
			alphabet_power += 31;
			_sp = true;
		}
		else
		{
			alphabet_power -= 31;
			_sp = false;
		}
	}
	private: System::Void IS_Form_Load(System::Object^ sender, System::EventArgs^ e)
	{
		srand((unsigned)time(NULL));
	}
	private: System::Void IS_Form_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (label11->Text == "---")
		{
			button3->Visible = false;
		}
		label1->Text = alphabet_power.ToString();
		label5->Text = password_length.ToString();
		if ((t != 0) && (v != 0) && (p != 0))
		{
			smin = (v * (t*24*60)) / p;
			label11->Text = smin.ToString();
		}
		sreal = pow(alphabet_power, password_length);
		label12->Text = sreal.ToString();
		if ((sreal < smin)||(label11->Text == "---"))
		{
			label14->Text = "Длина пароля или мощность алфавита недостаточны!";
			button3->Visible = false;
		}
		else
		{
			label14->Text = "";
			button3->Visible = true;
		}
	}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (password_length > 0)
		{
			password_length--;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		password_length++;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Password_CLR^ pswrd = gcnew Password_CLR(password_length, _nm, _sp, _up, _lw);
		textBox1->Text = "";
		for (int i = 0; i < 5; i++)
		{
			textBox1->Text += pswrd->generate() + "\r\n";
		}
	}	
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		t = Int32::Parse(textBox4->Text);
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		v = Int32::Parse(textBox3->Text);
	}
	
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (float::TryParse(textBox2->Text, p))
		{
			p = float::Parse(textBox2->Text);
		}
		else
		{
			MessageBox::Show("Введено некорректное значение!");
		}
	}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void IS_Form_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{
	}
};
}
