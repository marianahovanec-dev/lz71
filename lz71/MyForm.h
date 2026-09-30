#pragma once

namespace lz71 {

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
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(46, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Таблювати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(46, 132);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Побудувати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(46, 176);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Очистити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(159, 32);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(182, 212);
			this->listBox1->TabIndex = 4;
			// 
			// chart1
			// 
			chartArea1->AxisX->LabelStyle->Format = L"0.0";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(369, 12);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Green;
			series1->Legend = L"Legend1";
			series1->LegendText = L"y = sin (e^x) - ln^2 x";
			series1->MarkerSize = 8;
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(456, 300);
			this->chart1->TabIndex = 5;
			this->chart1->Text = L"chart1";
			title1->Name = L"Графік функцій варіант №15";
			this->chart1->Titles->Add(title1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Введіть k";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(870, 357);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			listBox1->Items->Clear();

			double a = 1.5;
			double b = 5.5;

			int k = System::Convert::ToInt32(textBox1->Text);

			if (k <= 0) {
				MessageBox::Show("Число k повинно бути більшим за 0!");
				return;
			}

			double h = (b - a) / k;

			listBox1->Items->Add("    X\t\t    Y");
			listBox1->Items->Add("-----------------------------------------");

			for (int i = 0; i <= k; i++) {
				double x = a + i * h;
				double ln_x = System::Math::Log(x);
				double y = System::Math::Sin(System::Math::Exp(x)) - (ln_x * ln_x);

				listBox1->Items->Add(x.ToString("F2") + "\t\t" + y.ToString("F2"));
			}
		}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series["Series1"]->Points->Clear();

		double a = 1.5;
		double b = 5.5;

		int k = System::Convert::ToInt32(textBox1->Text);

		if (k <= 0) {
			MessageBox::Show("Число k повинно бути більшим за 0!");
			return;
		}

		double h = (b - a) / k;

		for (int i = 0; i <= k; i++) {
			double x = a + i * h;
			double ln_x = System::Math::Log(x);
			double y = System::Math::Sin(System::Math::Exp(x)) - (ln_x * ln_x);
			// Інтервал між лініями сітки
			chart1->ChartAreas["ChartArea1"]->AxisX->Interval = 1.0;
			chart1->Series["Series1"]->Points->AddXY(x, y);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		listBox1->Items->Clear();
		chart1->Series["Series1"]->Points->Clear();
	}
	};
}