#pragma once


#include <iostream>
#include <string>
#include <Windows.h>

#include "Analysis.h"



namespace ProjectECG {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::DirectoryServices::DirectoryEntry^  directoryEntry1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  ResultBox;



	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->ResultBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 14);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 27);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(499, 731);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 59);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(499, 796);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 53);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 14);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(110, 27);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(13, 51);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(110, 27);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(131, 51);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(110, 27);
			this->textBox4->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(13, 88);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(110, 27);
			this->textBox5->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(131, 88);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(110, 27);
			this->textBox6->TabIndex = 8;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(13, 125);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(110, 27);
			this->textBox7->TabIndex = 9;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(131, 125);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(110, 27);
			this->textBox8->TabIndex = 10;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(13, 162);
			this->textBox9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(110, 27);
			this->textBox9->TabIndex = 11;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(131, 162);
			this->textBox10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(110, 27);
			this->textBox10->TabIndex = 12;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(13, 199);
			this->textBox11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(110, 27);
			this->textBox11->TabIndex = 13;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(131, 199);
			this->textBox12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(110, 27);
			this->textBox12->TabIndex = 14;
			// 
			// ResultBox
			// 
			this->ResultBox->Location = System::Drawing::Point(13, 731);
			this->ResultBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ResultBox->Multiline = true;
			this->ResultBox->Name = L"ResultBox";
			this->ResultBox->ReadOnly = true;
			this->ResultBox->Size = System::Drawing::Size(479, 118);
			this->ResultBox->TabIndex = 15;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1176, 863);
			this->Controls->Add(this->ResultBox);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string res = P(System::Convert::ToDouble(this->textBox1->Text), System::Convert::ToDouble(this->textBox2->Text)) + "\n" +
			Q(System::Convert::ToDouble(this->textBox3->Text), System::Convert::ToDouble(this->textBox4->Text)) + "\n" +
			R(System::Convert::ToDouble(this->textBox5->Text), System::Convert::ToDouble(this->textBox6->Text)) + "\n" +
			S(System::Convert::ToDouble(this->textBox7->Text), System::Convert::ToDouble(this->textBox8->Text)) + "\n" +
			T(System::Convert::ToDouble(this->textBox9->Text), System::Convert::ToDouble(this->textBox10->Text)) + "\n" +
			U(System::Convert::ToDouble(this->textBox11->Text), System::Convert::ToDouble(this->textBox12->Text));

		this->ResultBox->Text = gcnew System::String(res.c_str());
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	}
};
}

