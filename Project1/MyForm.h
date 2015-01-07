#include <stdlib.h>
#include <windows.h>

#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

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
			//):
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
	private: System::Windows::Forms::Label^  colorLabel;
	protected:
	private: System::Windows::Forms::Label^  locationLabel;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  yLabel;
	private: System::Windows::Forms::TextBox^  xLabel;
	private: System::Windows::Forms::Button^  moveButton;
	private: System::Windows::Forms::Label^  colorBox;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  InstructionLabel;

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
			this->colorLabel = (gcnew System::Windows::Forms::Label());
			this->locationLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->yLabel = (gcnew System::Windows::Forms::TextBox());
			this->xLabel = (gcnew System::Windows::Forms::TextBox());
			this->moveButton = (gcnew System::Windows::Forms::Button());
			this->colorBox = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->InstructionLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// colorLabel
			// 
			this->colorLabel->AutoSize = true;
			this->colorLabel->Location = System::Drawing::Point(106, 87);
			this->colorLabel->Name = L"colorLabel";
			this->colorLabel->Size = System::Drawing::Size(0, 13);
			this->colorLabel->TabIndex = 26;
			// 
			// locationLabel
			// 
			this->locationLabel->AutoSize = true;
			this->locationLabel->Location = System::Drawing::Point(106, 64);
			this->locationLabel->Name = L"locationLabel";
			this->locationLabel->Size = System::Drawing::Size(0, 13);
			this->locationLabel->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Color at Location:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Current Location:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Y Coordinates:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"X Coordinates:";
			// 
			// yLabel
			// 
			this->yLabel->Location = System::Drawing::Point(94, 32);
			this->yLabel->Name = L"yLabel";
			this->yLabel->Size = System::Drawing::Size(100, 20);
			this->yLabel->TabIndex = 20;
			// 
			// xLabel
			// 
			this->xLabel->Location = System::Drawing::Point(94, 6);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(100, 20);
			this->xLabel->TabIndex = 19;
			// 
			// moveButton
			// 
			this->moveButton->Location = System::Drawing::Point(209, 17);
			this->moveButton->Name = L"moveButton";
			this->moveButton->Size = System::Drawing::Size(75, 24);
			this->moveButton->TabIndex = 18;
			this->moveButton->Text = L"Move";
			this->moveButton->UseVisualStyleBackColor = true;
			this->moveButton->Click += gcnew System::EventHandler(this, &MyForm::moveButton_Click);
			// 
			// colorBox
			// 
			this->colorBox->AutoSize = true;
			this->colorBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->colorBox->Location = System::Drawing::Point(254, 84);
			this->colorBox->MinimumSize = System::Drawing::Size(20, 20);
			this->colorBox->Name = L"colorBox";
			this->colorBox->Size = System::Drawing::Size(20, 20);
			this->colorBox->TabIndex = 27;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(280, 84);
			this->label5->MinimumSize = System::Drawing::Size(20, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 20);
			this->label5->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Lime;
			this->label6->Location = System::Drawing::Point(280, 64);
			this->label6->MinimumSize = System::Drawing::Size(20, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 20);
			this->label6->TabIndex = 29;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Blue;
			this->label7->Location = System::Drawing::Point(280, 44);
			this->label7->MinimumSize = System::Drawing::Size(20, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 20);
			this->label7->TabIndex = 30;
			// 
			// InstructionLabel
			// 
			this->InstructionLabel->AutoSize = true;
			this->InstructionLabel->Location = System::Drawing::Point(14, 111);
			this->InstructionLabel->Name = L"InstructionLabel";
			this->InstructionLabel->Size = System::Drawing::Size(246, 13);
			this->InstructionLabel->TabIndex = 31;
			this->InstructionLabel->Text = L"Click and hold inside window then drag to location.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 136);
			this->Controls->Add(this->InstructionLabel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->colorBox);
			this->Controls->Add(this->colorLabel);
			this->Controls->Add(this->locationLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->yLabel);
			this->Controls->Add(this->xLabel);
			this->Controls->Add(this->moveButton);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void moveButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 Point pt;
				 pt.X = atol((const char*)(void*)Marshal::StringToHGlobalAnsi(this->xLabel->Text));
				 pt.Y = atol((const char*)(void*)Marshal::StringToHGlobalAnsi(this->yLabel->Text));
				 SetCursorPos(pt.X, pt.Y);
				 this->locationLabel->Text = (pt.X + ", " + pt.Y);
				 this->xLabel->Text = "";
				 this->yLabel->Text = "";
				 //Update color at location
				 COLORREF color;
				 HDC hDC;
				 hDC = GetDC(NULL);
				 color = GetPixel(hDC, pt.X, pt.Y);
				 this->colorLabel->Text = ("R: " + GetRValue(color) + ", G: " + GetGValue(color) + " B: " + GetBValue(color));
				 this->colorBox->BackColor = Color::FromArgb(GetRValue(color), GetGValue(color), GetBValue(color));
				 ReleaseDC(GetDesktopWindow(), hDC);
	}

private: System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			//Update mouse location
			POINT currentPt;
			GetCursorPos(&currentPt);
			this->locationLabel->Text = (currentPt.x + ", " + currentPt.y);
			//Update color at location
			COLORREF color;
			HDC hDC;
			hDC = GetDC(NULL);
			color = GetPixel(hDC, currentPt.x, currentPt.y);
			this->colorLabel->Text = ("R: " + GetRValue(color) + ", G: " + GetGValue(color) + " B: " + GetBValue(color));
			this->colorBox->BackColor = Color::FromArgb(GetRValue(color), GetGValue(color), GetBValue(color));
			ReleaseDC(GetDesktopWindow(), hDC);
}

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
