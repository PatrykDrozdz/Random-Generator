#pragma once

namespace RandomGenerator {

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
	private: System::Windows::Forms::GroupBox^  loty;
	private: System::Windows::Forms::RadioButton^  gauss;
	private: System::Windows::Forms::Button^  gen;
	protected:

	protected:


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  X;


	private: System::Windows::Forms::RadioButton^  levy;
	private: System::Windows::Forms::RadioButton^  fibonaccie;


	private: System::Windows::Forms::RadioButton^  cauchy;

	private: System::Windows::Forms::TextBox^  N;


	private: System::Windows::Forms::Label^  label2;


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
			this->loty = (gcnew System::Windows::Forms::GroupBox());
			this->levy = (gcnew System::Windows::Forms::RadioButton());
			this->fibonaccie = (gcnew System::Windows::Forms::RadioButton());
			this->cauchy = (gcnew System::Windows::Forms::RadioButton());
			this->gauss = (gcnew System::Windows::Forms::RadioButton());
			this->gen = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->X = (gcnew System::Windows::Forms::TextBox());
			this->N = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->loty->SuspendLayout();
			this->SuspendLayout();
			// 
			// loty
			// 
			this->loty->Controls->Add(this->levy);
			this->loty->Controls->Add(this->fibonaccie);
			this->loty->Controls->Add(this->cauchy);
			this->loty->Controls->Add(this->gauss);
			this->loty->Location = System::Drawing::Point(12, 462);
			this->loty->Name = L"loty";
			this->loty->Size = System::Drawing::Size(233, 100);
			this->loty->TabIndex = 0;
			this->loty->TabStop = false;
			this->loty->Text = L"Loty";
			// 
			// levy
			// 
			this->levy->AutoSize = true;
			this->levy->Location = System::Drawing::Point(28, 68);
			this->levy->Name = L"levy";
			this->levy->Size = System::Drawing::Size(48, 17);
			this->levy->TabIndex = 3;
			this->levy->TabStop = true;
			this->levy->Text = L"Levy";
			this->levy->UseVisualStyleBackColor = true;
			// 
			// fibonaccie
			// 
			this->fibonaccie->AutoSize = true;
			this->fibonaccie->Location = System::Drawing::Point(135, 68);
			this->fibonaccie->Name = L"fibonaccie";
			this->fibonaccie->Size = System::Drawing::Size(77, 17);
			this->fibonaccie->TabIndex = 2;
			this->fibonaccie->TabStop = true;
			this->fibonaccie->Text = L"Fibonaccie";
			this->fibonaccie->UseVisualStyleBackColor = true;
			// 
			// cauchy
			// 
			this->cauchy->AutoSize = true;
			this->cauchy->Location = System::Drawing::Point(135, 20);
			this->cauchy->Name = L"cauchy";
			this->cauchy->Size = System::Drawing::Size(61, 17);
			this->cauchy->TabIndex = 1;
			this->cauchy->TabStop = true;
			this->cauchy->Text = L"Cauchy";
			this->cauchy->UseVisualStyleBackColor = true;
			// 
			// gauss
			// 
			this->gauss->AutoSize = true;
			this->gauss->Location = System::Drawing::Point(28, 20);
			this->gauss->Name = L"gauss";
			this->gauss->Size = System::Drawing::Size(55, 17);
			this->gauss->TabIndex = 0;
			this->gauss->TabStop = true;
			this->gauss->Text = L"Gauss";
			this->gauss->UseVisualStyleBackColor = true;
			// 
			// gen
			// 
			this->gen->Location = System::Drawing::Point(728, 470);
			this->gen->Name = L"gen";
			this->gen->Size = System::Drawing::Size(75, 23);
			this->gen->TabIndex = 1;
			this->gen->Text = L"Gen";
			this->gen->UseVisualStyleBackColor = true;
			this->gen->Click += gcnew System::EventHandler(this, &RandomGenerator::gen_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(280, 462);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"X";
			// 
			// X
			// 
			this->X->Location = System::Drawing::Point(300, 462);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(100, 20);
			this->X->TabIndex = 3;
			// 
			// N
			// 
			this->N->Location = System::Drawing::Point(524, 458);
			this->N->Name = L"N";
			this->N->Size = System::Drawing::Size(100, 20);
			this->N->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(489, 461);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"N";
			// 
			// RandomGenerator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(838, 574);
			this->Controls->Add(this->N);
			this->Controls->Add(this->loty);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->X);
			this->Controls->Add(this->gen);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(854, 612);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(854, 612);
			this->Name = L"RandomGenerator";
			this->Text = L"RandomGenerator";
			this->loty->ResumeLayout(false);
			this->loty->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void gen_Click(System::Object^  sender, System::EventArgs^  e) {
		
	

		

		if (cauchy->Checked==true) {



		    Int16 x = Int16::Parse(X->Text);
			Int16 n = Int16::Parse(N->Text);

			Double pi = 3.14;
			Double f = 0;

			for (Int16 i = x; i < n; i++) {

				Graphics^ graph = this->CreateGraphics();
				Pen^ pen = gcnew Pen(System::Drawing::Color::Red);
				
				f = (1.0 / pi)*(1.0 / (1.0 + ((Double)i*(Double)i)));

				graph->DrawRectangle(pen, i%(this->Width), (Int16)f%(this->Height), 
					(i + 10) % (this->Width), (Int16)(f + 10.0) % (this->Height));

			}

		}

	}

};
}
