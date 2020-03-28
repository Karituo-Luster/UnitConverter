#pragma once
#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#include <string>
namespace UnitConverter {
	using namespace std;
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
	private: System::Windows::Forms::TextBox^ InputBox;
	protected:

	private: System::Windows::Forms::Button^ SwitchUnitButton;
	private: System::Windows::Forms::ToolStripMenuItem^ lengthToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inchesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ feetToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ yardsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ milesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ areaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ temperatureToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ OuputBox;
	private: System::Windows::Forms::MenuStrip^ MenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ LengthMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ LengthMenu1;
	private: System::Windows::Forms::ToolStripMenuItem^ LengthMenu2;
	private: System::Windows::Forms::ToolStripMenuItem^ LengthMenu3;
	private: System::Windows::Forms::ToolStripMenuItem^ LengthMenu4;
	private: System::Windows::Forms::GroupBox^ MetricGroupBox;
	private: System::Windows::Forms::GroupBox^ ImpGroupBox;
	private: System::Windows::Forms::Label^ MilimeterLabel;
	private: System::Windows::Forms::Label^ CentimeterLabel;
	private: System::Windows::Forms::Label^ MilesLabel;
	private: System::Windows::Forms::Label^ YardsLabel;
	private: System::Windows::Forms::Label^ FeetLabel;
	private: System::Windows::Forms::Label^ InchesLabel;
	private: System::Windows::Forms::Label^ KilometerLabel;
	private: System::Windows::Forms::Label^ MeterLabel;
	private: System::Windows::Forms::ToolStripMenuItem^ HelpMenu;
	private: System::Windows::Forms::Button^ Calcu;
	private: System::Windows::Forms::Label^ Label1;
	private: System::Windows::Forms::Label^ Label2;
	private: System::Windows::Forms::Label^ Label3;
	private: System::Windows::Forms::Label^ Label4;
	private: System::Windows::Forms::Label^ Label5;
	private: System::Windows::Forms::Label^ Label6;
	private: System::Windows::Forms::Label^ Label7;
	private: System::Windows::Forms::Label^ Label8;
	private: System::ComponentModel::IContainer^ components;
	private:
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->InputBox = (gcnew System::Windows::Forms::TextBox());
			this->SwitchUnitButton = (gcnew System::Windows::Forms::Button());
			this->OuputBox = (gcnew System::Windows::Forms::GroupBox());
			this->MetricGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Label8 = (gcnew System::Windows::Forms::Label());
			this->Label7 = (gcnew System::Windows::Forms::Label());
			this->Label6 = (gcnew System::Windows::Forms::Label());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->KilometerLabel = (gcnew System::Windows::Forms::Label());
			this->MeterLabel = (gcnew System::Windows::Forms::Label());
			this->MilimeterLabel = (gcnew System::Windows::Forms::Label());
			this->CentimeterLabel = (gcnew System::Windows::Forms::Label());
			this->ImpGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->MilesLabel = (gcnew System::Windows::Forms::Label());
			this->YardsLabel = (gcnew System::Windows::Forms::Label());
			this->FeetLabel = (gcnew System::Windows::Forms::Label());
			this->InchesLabel = (gcnew System::Windows::Forms::Label());
			this->MenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->LengthMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LengthMenu1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LengthMenu2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LengthMenu3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LengthMenu4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HelpMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Calcu = (gcnew System::Windows::Forms::Button());
			this->OuputBox->SuspendLayout();
			this->MetricGroupBox->SuspendLayout();
			this->ImpGroupBox->SuspendLayout();
			this->MenuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// InputBox
			// 
			this->InputBox->Location = System::Drawing::Point(12, 210);
			this->InputBox->Name = L"InputBox";
			this->InputBox->Size = System::Drawing::Size(199, 45);
			this->InputBox->TabIndex = 0;
			this->InputBox->Text = L"Type Here...";
			// 
			// SwitchUnitButton
			// 
			this->SwitchUnitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->SwitchUnitButton->Location = System::Drawing::Point(12, 92);
			this->SwitchUnitButton->Name = L"SwitchUnitButton";
			this->SwitchUnitButton->Size = System::Drawing::Size(199, 78);
			this->SwitchUnitButton->TabIndex = 1;
			this->SwitchUnitButton->Text = L"Switch to Metric";
			this->SwitchUnitButton->UseVisualStyleBackColor = true;
			this->SwitchUnitButton->Click += gcnew System::EventHandler(this, &MyForm::SwitchUnitButton_Click);
			// 
			// OuputBox
			// 
			this->OuputBox->Controls->Add(this->MetricGroupBox);
			this->OuputBox->Controls->Add(this->ImpGroupBox);
			this->OuputBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->OuputBox->Location = System::Drawing::Point(217, 31);
			this->OuputBox->Name = L"OuputBox";
			this->OuputBox->Size = System::Drawing::Size(653, 318);
			this->OuputBox->TabIndex = 3;
			this->OuputBox->TabStop = false;
			this->OuputBox->Text = L"Output";
			// 
			// MetricGroupBox
			// 
			this->MetricGroupBox->Controls->Add(this->Label8);
			this->MetricGroupBox->Controls->Add(this->Label7);
			this->MetricGroupBox->Controls->Add(this->Label6);
			this->MetricGroupBox->Controls->Add(this->Label5);
			this->MetricGroupBox->Controls->Add(this->KilometerLabel);
			this->MetricGroupBox->Controls->Add(this->MeterLabel);
			this->MetricGroupBox->Controls->Add(this->MilimeterLabel);
			this->MetricGroupBox->Controls->Add(this->CentimeterLabel);
			this->MetricGroupBox->Location = System::Drawing::Point(327, 37);
			this->MetricGroupBox->Name = L"MetricGroupBox";
			this->MetricGroupBox->Size = System::Drawing::Size(321, 275);
			this->MetricGroupBox->TabIndex = 1;
			this->MetricGroupBox->TabStop = false;
			this->MetricGroupBox->Text = L"Metric";
			// 
			// Label8
			// 
			this->Label8->Location = System::Drawing::Point(124, 160);
			this->Label8->Name = L"Label8";
			this->Label8->Size = System::Drawing::Size(180, 30);
			this->Label8->TabIndex = 11;
			this->Label8->Text = L"0";
			// 
			// Label7
			// 
			this->Label7->Location = System::Drawing::Point(124, 117);
			this->Label7->Name = L"Label7";
			this->Label7->Size = System::Drawing::Size(180, 30);
			this->Label7->TabIndex = 10;
			this->Label7->Text = L"0";
			// 
			// Label6
			// 
			this->Label6->Location = System::Drawing::Point(124, 75);
			this->Label6->Name = L"Label6";
			this->Label6->Size = System::Drawing::Size(180, 30);
			this->Label6->TabIndex = 9;
			this->Label6->Text = L"0";
			// 
			// Label5
			// 
			this->Label5->Location = System::Drawing::Point(125, 32);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(180, 30);
			this->Label5->TabIndex = 8;
			this->Label5->Text = L"0";
			// 
			// KilometerLabel
			// 
			this->KilometerLabel->AutoSize = true;
			this->KilometerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->KilometerLabel->Location = System::Drawing::Point(6, 160);
			this->KilometerLabel->Name = L"KilometerLabel";
			this->KilometerLabel->Size = System::Drawing::Size(141, 29);
			this->KilometerLabel->TabIndex = 7;
			this->KilometerLabel->Text = L"Kilometers:";
			// 
			// MeterLabel
			// 
			this->MeterLabel->AutoSize = true;
			this->MeterLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->MeterLabel->Location = System::Drawing::Point(6, 117);
			this->MeterLabel->Name = L"MeterLabel";
			this->MeterLabel->Size = System::Drawing::Size(97, 29);
			this->MeterLabel->TabIndex = 6;
			this->MeterLabel->Text = L"Meters:";
			// 
			// MilimeterLabel
			// 
			this->MilimeterLabel->AutoSize = true;
			this->MilimeterLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->MilimeterLabel->Location = System::Drawing::Point(6, 32);
			this->MilimeterLabel->Name = L"MilimeterLabel";
			this->MilimeterLabel->Size = System::Drawing::Size(143, 29);
			this->MilimeterLabel->TabIndex = 5;
			this->MilimeterLabel->Text = L"Millimeters:";
			// 
			// CentimeterLabel
			// 
			this->CentimeterLabel->AutoSize = true;
			this->CentimeterLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->CentimeterLabel->Location = System::Drawing::Point(6, 75);
			this->CentimeterLabel->Name = L"CentimeterLabel";
			this->CentimeterLabel->Size = System::Drawing::Size(157, 29);
			this->CentimeterLabel->TabIndex = 4;
			this->CentimeterLabel->Text = L"Centimeters:";
			// 
			// ImpGroupBox
			// 
			this->ImpGroupBox->Controls->Add(this->Label4);
			this->ImpGroupBox->Controls->Add(this->Label3);
			this->ImpGroupBox->Controls->Add(this->Label2);
			this->ImpGroupBox->Controls->Add(this->Label1);
			this->ImpGroupBox->Controls->Add(this->MilesLabel);
			this->ImpGroupBox->Controls->Add(this->YardsLabel);
			this->ImpGroupBox->Controls->Add(this->FeetLabel);
			this->ImpGroupBox->Controls->Add(this->InchesLabel);
			this->ImpGroupBox->Location = System::Drawing::Point(0, 37);
			this->ImpGroupBox->Name = L"ImpGroupBox";
			this->ImpGroupBox->Size = System::Drawing::Size(320, 275);
			this->ImpGroupBox->TabIndex = 0;
			this->ImpGroupBox->TabStop = false;
			this->ImpGroupBox->Text = L"Imperial";
			// 
			// Label4
			// 
			this->Label4->Location = System::Drawing::Point(106, 160);
			this->Label4->Name = L"Label4";
			this->Label4->Size = System::Drawing::Size(180, 30);
			this->Label4->TabIndex = 7;
			this->Label4->Text = L"0";
			// 
			// Label3
			// 
			this->Label3->Location = System::Drawing::Point(106, 117);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(180, 30);
			this->Label3->TabIndex = 6;
			this->Label3->Text = L"0";
			// 
			// Label2
			// 
			this->Label2->Location = System::Drawing::Point(106, 75);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(180, 30);
			this->Label2->TabIndex = 5;
			this->Label2->Text = L"0";
			// 
			// Label1
			// 
			this->Label1->Location = System::Drawing::Point(106, 32);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(180, 30);
			this->Label1->TabIndex = 4;
			this->Label1->Text = L"0";
			// 
			// MilesLabel
			// 
			this->MilesLabel->AutoSize = true;
			this->MilesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->MilesLabel->Location = System::Drawing::Point(6, 160);
			this->MilesLabel->Name = L"MilesLabel";
			this->MilesLabel->Size = System::Drawing::Size(87, 29);
			this->MilesLabel->TabIndex = 3;
			this->MilesLabel->Text = L"Miles: ";
			// 
			// YardsLabel
			// 
			this->YardsLabel->AutoSize = true;
			this->YardsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->YardsLabel->Location = System::Drawing::Point(6, 117);
			this->YardsLabel->Name = L"YardsLabel";
			this->YardsLabel->Size = System::Drawing::Size(92, 29);
			this->YardsLabel->TabIndex = 2;
			this->YardsLabel->Text = L"Yards: ";
			// 
			// FeetLabel
			// 
			this->FeetLabel->AutoSize = true;
			this->FeetLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->FeetLabel->Location = System::Drawing::Point(6, 75);
			this->FeetLabel->Name = L"FeetLabel";
			this->FeetLabel->Size = System::Drawing::Size(77, 29);
			this->FeetLabel->TabIndex = 1;
			this->FeetLabel->Text = L"Feet: ";
			// 
			// InchesLabel
			// 
			this->InchesLabel->AutoSize = true;
			this->InchesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->InchesLabel->Location = System::Drawing::Point(6, 32);
			this->InchesLabel->Name = L"InchesLabel";
			this->InchesLabel->Size = System::Drawing::Size(94, 29);
			this->InchesLabel->TabIndex = 0;
			this->InchesLabel->Text = L"Inches:";
			// 
			// MenuStrip
			// 
			this->MenuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->MenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->LengthMenu, this->HelpMenu });
			this->MenuStrip->Location = System::Drawing::Point(0, 0);
			this->MenuStrip->Name = L"MenuStrip";
			this->MenuStrip->Size = System::Drawing::Size(882, 28);
			this->MenuStrip->TabIndex = 4;
			this->MenuStrip->Text = L"MenuStrip";
			// 
			// LengthMenu
			// 
			this->LengthMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->LengthMenu1,
					this->LengthMenu2, this->LengthMenu3, this->LengthMenu4
			});
			this->LengthMenu->Name = L"LengthMenu";
			this->LengthMenu->Size = System::Drawing::Size(68, 24);
			this->LengthMenu->Text = L"Length";
			// 
			// LengthMenu1
			// 
			this->LengthMenu1->Checked = true;
			this->LengthMenu1->CheckOnClick = true;
			this->LengthMenu1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->LengthMenu1->Name = L"LengthMenu1";
			this->LengthMenu1->Size = System::Drawing::Size(224, 26);
			this->LengthMenu1->Text = L"Inches";
			this->LengthMenu1->Click += gcnew System::EventHandler(this, &MyForm::LengthMenu1_Click);
			// 
			// LengthMenu2
			// 
			this->LengthMenu2->CheckOnClick = true;
			this->LengthMenu2->Name = L"LengthMenu2";
			this->LengthMenu2->Size = System::Drawing::Size(224, 26);
			this->LengthMenu2->Text = L"Feet";
			this->LengthMenu2->Click += gcnew System::EventHandler(this, &MyForm::LengthMenu2_Click);
			// 
			// LengthMenu3
			// 
			this->LengthMenu3->CheckOnClick = true;
			this->LengthMenu3->Name = L"LengthMenu3";
			this->LengthMenu3->Size = System::Drawing::Size(224, 26);
			this->LengthMenu3->Text = L"Yards";
			this->LengthMenu3->Click += gcnew System::EventHandler(this, &MyForm::LengthMenu3_Click);
			// 
			// LengthMenu4
			// 
			this->LengthMenu4->CheckOnClick = true;
			this->LengthMenu4->Name = L"LengthMenu4";
			this->LengthMenu4->Size = System::Drawing::Size(224, 26);
			this->LengthMenu4->Text = L"Miles";
			this->LengthMenu4->Click += gcnew System::EventHandler(this, &MyForm::LengthMenu4_Click);
			// 
			// HelpMenu
			// 
			this->HelpMenu->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->HelpMenu->Name = L"HelpMenu";
			this->HelpMenu->Size = System::Drawing::Size(63, 24);
			this->HelpMenu->Text = L"Credit";
			this->HelpMenu->Click += gcnew System::EventHandler(this, &MyForm::HelpMenu_Click);
			// 
			// Calcu
			// 
			this->Calcu->Location = System::Drawing::Point(52, 261);
			this->Calcu->Name = L"Calcu";
			this->Calcu->Size = System::Drawing::Size(114, 50);
			this->Calcu->TabIndex = 5;
			this->Calcu->Text = L"=";
			this->Calcu->UseVisualStyleBackColor = true;
			this->Calcu->Click += gcnew System::EventHandler(this, &MyForm::Calcu_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 38);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 361);
			this->Controls->Add(this->Calcu);
			this->Controls->Add(this->OuputBox);
			this->Controls->Add(this->SwitchUnitButton);
			this->Controls->Add(this->InputBox);
			this->Controls->Add(this->MenuStrip);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->Name = L"MyForm";
			this->Text = L"Unit Converter";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->OuputBox->ResumeLayout(false);
			this->MetricGroupBox->ResumeLayout(false);
			this->MetricGroupBox->PerformLayout();
			this->ImpGroupBox->ResumeLayout(false);
			this->ImpGroupBox->PerformLayout();
			this->MenuStrip->ResumeLayout(false);
			this->MenuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Calcu_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ UsrIn = InputBox->Text;
	double X = System::Convert::ToDouble(UsrIn);
	double In, Ft, Yd, Mi;
	double mm, cm, m, km;
	if (SwitchUnitButton->Text == "Switch to Metric" && LengthMenu1->Checked == true)
	{
		In = X;
		Ft = X / 12;
		Yd = X / 36;
		Mi = X / 63360;
		cm = X * 2.54;
		mm = cm * 10;
		m  = cm / 1000;
		km = m / 1000;
	}
	else if (SwitchUnitButton->Text == "Switch to Imperial" && LengthMenu1->Checked == true)
	{
		mm = X;
		cm = mm / 10;
		m  =  cm / 100;
		km = m / 1000;
		In = cm / 2.54;
		Ft = In / 12;
		Yd = Ft / 3;
		Mi = Yd / 1760;
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (SwitchUnitButton->Text == "Switch to Metric" && LengthMenu2->Checked == true)
	{
		In = X * 12;
		Ft = X;
		Yd = Ft / 3;
		Mi = Yd / 1760;
		cm = X * 30.48;
		mm = cm * 10;
		m  = cm / 100;
		km = m / 1000;
	}
	else if (SwitchUnitButton->Text == "Switch to Imperial" && LengthMenu2->Checked == true)
	{
		mm = X * 10;
		cm = X;
		m  = cm / 100;
		km = m / 1000;
		In = cm / 2.54;
		Ft = In / 12;
		Yd = Ft / 3;
		Mi = Yd / 1760;
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (SwitchUnitButton->Text == "Switch to Metric" && LengthMenu3->Checked == true)
	{
		In = X * 36;
		Ft = X *3;
		Yd = X;
		Mi = Yd / 1760;
		cm = In * 2.54;
		mm = cm * 10;
		m  = cm / 100;
		km = m / 1000;
	}
	else if (SwitchUnitButton->Text == "Switch to Imperial" && LengthMenu3->Checked == true)
	{
		mm = X * 1000;
		cm = X * 100;
		m = X;
		km = m / 1000;
		In = cm / 2.54;
		Ft = In / 12;
		Yd = Ft / 3;
		Mi = Yd / 1760;
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (SwitchUnitButton->Text == "Switch to Metric" && LengthMenu4->Checked == true)
	{
		In = X * 63360;
		Ft = X * 5280;
		Yd = X * 1760;
		Mi = X;
		cm = In * 2.54;
		mm = cm * 10;
		m  = cm / 100;
		km = m / 1000;
	}
	else if (SwitchUnitButton->Text == "Switch to Imperial" && LengthMenu4->Checked == true)
	{
		mm = X * 1000000;
		cm = X * 100000;
		m  = X * 1000;
		km = X;
		In = cm / 2.54;
		Ft = In / 12;
		Yd = Ft / 3;
		Mi = Yd / 1760;
	}
	//Output
	UsrIn = System::Convert::ToString(In);
	Label1->Text = UsrIn;
	UsrIn = System::Convert::ToString(Ft);
	Label2->Text = UsrIn;
	UsrIn = System::Convert::ToString(Yd);
	Label3->Text = UsrIn;
	UsrIn = System::Convert::ToString(Mi);
	Label4->Text = UsrIn;
	UsrIn = System::Convert::ToString(mm);
	Label5->Text = UsrIn;
	UsrIn = System::Convert::ToString(cm);
	Label6->Text = UsrIn;
	UsrIn = System::Convert::ToString(m);
	Label7->Text = UsrIn;
	UsrIn = System::Convert::ToString(km);
	Label8->Text = UsrIn;
}
private: System::Void SwitchUnitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchUnitButton->Text == "Switch to Metric")
	{
		SwitchUnitButton->Text = "Switch to Imperial";
		LengthMenu1->Text = "Millimeters";
		LengthMenu2->Text = "Centimeters";
		LengthMenu3->Text = "Meters";
		LengthMenu4->Text = "Kilometers";
		InputBox->Text    = "Type Here...";
	}
	else if (SwitchUnitButton->Text == "Switch to Imperial")
	{
		SwitchUnitButton->Text = "Switch to Metric";
		LengthMenu1->Text = "Inches";
		LengthMenu2->Text = "Feet";
		LengthMenu3->Text = "Yards";
		LengthMenu4->Text = "Miles";
		InputBox->Text = "Type Here...";
	}
}

private: System::Void LengthMenu1_Click(System::Object^ sender, System::EventArgs^ e) {
	LengthMenu1->Checked = true;
	LengthMenu2->Checked = false;
	LengthMenu3->Checked = false;
	LengthMenu4->Checked = false;
}
private: System::Void LengthMenu2_Click(System::Object^ sender, System::EventArgs^ e) {
	LengthMenu1->Checked = false;
	LengthMenu2->Checked = true;
	LengthMenu3->Checked = false;
	LengthMenu4->Checked = false;
}
private: System::Void LengthMenu3_Click(System::Object^ sender, System::EventArgs^ e) {
	LengthMenu1->Checked = false;
	LengthMenu2->Checked = false;
	LengthMenu3->Checked = true;
	LengthMenu4->Checked = false;
}
private: System::Void LengthMenu4_Click(System::Object^ sender, System::EventArgs^ e) {
	LengthMenu1->Checked = false;
	LengthMenu2->Checked = false;
	LengthMenu3->Checked = false;
	LengthMenu4->Checked = true;
}
private: System::Void HelpMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Thank you for trying out my Unit Converter! Made by Tommy Hoang");
}

};
}
