#pragma once

#include<math.h>

namespace RandomGenerator {
	////////////////////
	using namespace std;
	//////////////
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RandomGenerator
	/// </summary>
	public ref class RandomGenerator : public System::Windows::Forms::Form
	{
	public:
		RandomGenerator(void)
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
		~RandomGenerator()
		{
			if (components)
			{
				delete components;
			}
		}
	
	/////////////////////////////////////////////////
	private: Double lam = 0;
	private: Double alfa = 0;
	private: Double x;
	private: Double n;
	private: Double pi = 3.14;
	private: int a = 0;
	private: Double fun = 0;
	///////////////////////////////////////////////


	private: System::Windows::Forms::Button^  gen;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  X;
	private: System::Windows::Forms::TextBox^  N;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  row;
	private: System::Windows::Forms::RadioButton^  levy;
	private: System::Windows::Forms::RadioButton^  gauss;
	private: System::Windows::Forms::RadioButton^  cauchyGen;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  alf;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  lambda;
	private: System::Windows::Forms::Label^  label4;

	/// potrzebne metody
	///////////////////////////////////////////////////////
	

	
	//////////////////////////////////////////////////////
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->gen = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->X = (gcnew System::Windows::Forms::TextBox());
			this->N = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->row = (gcnew System::Windows::Forms::RadioButton());
			this->levy = (gcnew System::Windows::Forms::RadioButton());
			this->gauss = (gcnew System::Windows::Forms::RadioButton());
			this->cauchyGen = (gcnew System::Windows::Forms::RadioButton());
			this->alf = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lambda = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gen
			// 
			this->gen->Location = System::Drawing::Point(27, 260);
			this->gen->Name = L"gen";
			this->gen->Size = System::Drawing::Size(162, 76);
			this->gen->TabIndex = 1;
			this->gen->Text = L"Generuj";
			this->gen->UseVisualStyleBackColor = true;
			this->gen->Click += gcnew System::EventHandler(this, &RandomGenerator::gen_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"X";
			// 
			// X
			// 
			this->X->Location = System::Drawing::Point(27, 12);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(100, 20);
			this->X->TabIndex = 3;
			// 
			// N
			// 
			this->N->Location = System::Drawing::Point(27, 39);
			this->N->Name = L"N";
			this->N->Size = System::Drawing::Size(100, 20);
			this->N->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"N";
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea";
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->Location = System::Drawing::Point(208, 62);
			this->chart->Name = L"chart";
			this->chart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->BackSecondaryColor = System::Drawing::Color::White;
			series1->BorderColor = System::Drawing::Color::Silver;
			series1->ChartArea = L"ChartArea";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Black;
			series1->Name = L"Series";
			this->chart->Series->Add(series1);
			this->chart->Size = System::Drawing::Size(598, 465);
			this->chart->TabIndex = 7;
			this->chart->Text = L"wykres";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->row);
			this->groupBox1->Controls->Add(this->levy);
			this->groupBox1->Controls->Add(this->gauss);
			this->groupBox1->Controls->Add(this->cauchyGen);
			this->groupBox1->Location = System::Drawing::Point(27, 79);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(162, 163);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Rozk³ady";
			// 
			// row
			// 
			this->row->AutoSize = true;
			this->row->Location = System::Drawing::Point(7, 132);
			this->row->Name = L"row";
			this->row->Size = System::Drawing::Size(89, 17);
			this->row->TabIndex = 3;
			this->row->TabStop = true;
			this->row->Text = L"Równomierny";
			this->row->UseVisualStyleBackColor = true;
			this->row->CheckedChanged += gcnew System::EventHandler(this, &RandomGenerator::row_CheckedChanged);
			// 
			// levy
			// 
			this->levy->AutoSize = true;
			this->levy->Location = System::Drawing::Point(7, 97);
			this->levy->Name = L"levy";
			this->levy->Size = System::Drawing::Size(48, 17);
			this->levy->TabIndex = 2;
			this->levy->TabStop = true;
			this->levy->Text = L"Levy";
			this->levy->UseVisualStyleBackColor = true;
			this->levy->CheckedChanged += gcnew System::EventHandler(this, &RandomGenerator::levy_CheckedChanged);
			// 
			// gauss
			// 
			this->gauss->AutoSize = true;
			this->gauss->Location = System::Drawing::Point(7, 63);
			this->gauss->Name = L"gauss";
			this->gauss->Size = System::Drawing::Size(55, 17);
			this->gauss->TabIndex = 1;
			this->gauss->TabStop = true;
			this->gauss->Text = L"Gauss";
			this->gauss->UseVisualStyleBackColor = true;
			this->gauss->CheckedChanged += gcnew System::EventHandler(this, &RandomGenerator::gauss_CheckedChanged);
			// 
			// cauchyGen
			// 
			this->cauchyGen->AutoSize = true;
			this->cauchyGen->Location = System::Drawing::Point(7, 30);
			this->cauchyGen->Name = L"cauchyGen";
			this->cauchyGen->Size = System::Drawing::Size(61, 17);
			this->cauchyGen->TabIndex = 0;
			this->cauchyGen->TabStop = true;
			this->cauchyGen->Text = L"Cauchy";
			this->cauchyGen->UseVisualStyleBackColor = true;
			this->cauchyGen->CheckedChanged += gcnew System::EventHandler(this, &RandomGenerator::cauchyGen_CheckedChanged);
			// 
			// alf
			// 
			this->alf->Location = System::Drawing::Point(186, 9);
			this->alf->Name = L"alf";
			this->alf->Size = System::Drawing::Size(100, 20);
			this->alf->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(140, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Alfa";
			// 
			// lambda
			// 
			this->lambda->Location = System::Drawing::Point(186, 39);
			this->lambda->Name = L"lambda";
			this->lambda->Size = System::Drawing::Size(100, 20);
			this->lambda->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(135, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Lambda";
			// 
			// RandomGenerator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(838, 574);
			this->Controls->Add(this->alf);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lambda);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->N);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->X);
			this->Controls->Add(this->gen);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(854, 612);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(854, 612);
			this->Name = L"RandomGenerator";
			this->Text = L"RandomGenerator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void gen_Click(System::Object^  sender, System::EventArgs^  e) {
		
			x = Double::Parse(X->Text);
			n = Double::Parse(N->Text);
			alfa = Double::Parse(alf->Text);
			lam = Double::Parse(lambda->Text);
			
			if (cauchyGen->Checked && a == 0) {
				for (Int16 i = x; i < n; i++) {
					fun = ((1 / this->pi) * lam / (pow(lam, 2) + pow(((Double)i - alfa), 2)));
					this->chart->Series["Series"]->Points->AddXY(i,fun);
				}
				a++;
			}

			if (this->levy->Checked && a == 0) {
				for (Int16 i = x; i < n; i++) {
					//fun = 
					this->chart->Series["Series"]->Points->AddXY(i, fun);
				}
				a++;
			}
			
			if (this->gauss->Checked && a == 0) {
				for (Int16 i = x; i < n; i++) {
					 fun = 1 / (lam*sqrt(2 * this->pi)) * exp(-(pow((i - alfa) / lam, 2)));
					 this->chart->Series["Series"]->Points->AddXY(i, fun);
				}
				a++;
			}

			if (this->row->Checked && a == 0) {
				for (Int16 i = x; i < n; i++) {
					//fun = 
					this->chart->Series["Series"]->Points->AddXY(i, fun);
				}
				a++;
			}

	}

private: System::Void cauchyGen_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Text = "X";
	this->label2->Text = "N";
	this->label3->Text = "Alfa";
	this->label4->Text = "Lambda";
}
private: System::Void gauss_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Text = "X";
	this->label2->Text = "N";
	this->label3->Text = "Mi";
	this->label4->Text = "Ro";
}
private: System::Void levy_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void row_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
