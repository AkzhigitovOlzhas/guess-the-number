#pragma once

namespace MyGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SForm
	/// </summary>
	public ref class SForm : public System::Windows::Forms::Form
	{
	public:
		Int32 ^num;
	public:
		SForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		SForm(Int32 ^textRand)
		{
			num = textRand;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblAnswer;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblStatic;



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
			this->lblAnswer = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblStatic = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblAnswer
			// 
			this->lblAnswer->AutoEllipsis = true;
			this->lblAnswer->AutoSize = true;
			this->lblAnswer->Font = (gcnew System::Drawing::Font(L"Base02Cyrillic2", 9.749999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAnswer->ForeColor = System::Drawing::Color::White;
			this->lblAnswer->Location = System::Drawing::Point(16, 209);
			this->lblAnswer->Name = L"lblAnswer";
			this->lblAnswer->Size = System::Drawing::Size(231, 21);
			this->lblAnswer->TabIndex = 9;
			this->lblAnswer->Text = L"Попробуйте угадать число !)";
			this->lblAnswer->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"RAZMAHONT", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::DarkOrange;
			this->button1->Location = System::Drawing::Point(373, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 36);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Проверить!";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roadkill Alternates(RUS BY LYAJ", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Coral;
			this->label2->Location = System::Drawing::Point(16, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 24);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Вводите предрологаемые числа: ";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(234, 157);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Base02Cyrillic2", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FloralWhite;
			this->label1->Location = System::Drawing::Point(108, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(282, 44);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Игра началась!";
			// 
			// lblStatic
			// 
			this->lblStatic->AutoSize = true;
			this->lblStatic->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->lblStatic->Font = (gcnew System::Drawing::Font(L"Dikovina", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStatic->ForeColor = System::Drawing::Color::FloralWhite;
			this->lblStatic->Location = System::Drawing::Point(16, 277);
			this->lblStatic->Name = L"lblStatic";
			this->lblStatic->Size = System::Drawing::Size(0, 24);
			this->lblStatic->TabIndex = 10;
			// 
			// SForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->ClientSize = System::Drawing::Size(487, 347);
			this->Controls->Add(this->lblStatic);
			this->Controls->Add(this->lblAnswer);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SForm";
			this->Opacity = 0.95;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Игра \"Угадай число\"";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		int account = 0;

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Convert::ToInt32(numericUpDown1->Text) == Convert::ToInt32(num)) {
		lblAnswer->Text = "Ура! Вы выйграли :D";
		lblStatic->Text = "Вы угадали число с " + account + " попытки) \nХороший результат :D";
	}
	else if (Convert::ToInt32(numericUpDown1->Text) < Convert::ToInt32(num)) {

		if ((Convert::ToInt32(num) - Convert::ToInt32(numericUpDown1->Text)) <= 5) {
			lblAnswer->Text = "Вы почти угадали :D \nНемного по больше!)";
			account++;
		}
		else if ((Convert::ToInt32(num) - Convert::ToInt32(numericUpDown1->Text)) <= 10) {
			lblAnswer->Text = "Вы почти угадали :D \nНо загаданное число чуть больше !)";
			account++;
		}
		else if ((Convert::ToInt32(num) - Convert::ToInt32(numericUpDown1->Text)) <= 30) {
			lblAnswer->Text = "Ну так прохладно еще :D \nЗагаданное число больше !)";
			account++;
		}
		else if ((Convert::ToInt32(num) - Convert::ToInt32(numericUpDown1->Text)) <= 50) {
			lblAnswer->Text = "Число больше! \nПримерно на 5x5+25 :D ";
			account++;
		}
		else if ((Convert::ToInt32(num) - Convert::ToInt32(numericUpDown1->Text)) <= 100) {
			lblAnswer->Text = "Число больше! \nХолодно :D ";
			account++;
		}
		else if ((Convert::ToInt32(num) - Convert::ToInt32(numericUpDown1->Text)) <= 200) {
			lblAnswer->Text = "Число больше на много больше :D ";
			account++;
		}
		else {
			lblAnswer->Text = "Число больше! \nДалеко до победы :D ";
			account++;
		}
	}
	else if (Convert::ToInt32(numericUpDown1->Text) > Convert::ToInt32(num)) {

		if ((Convert::ToInt32(numericUpDown1->Text) - Convert::ToInt32(num)) <= 5) {
			lblAnswer->Text = "Вы почти угадали :D \nНемного по меньше!)";
			account++;
		}
		else if ((Convert::ToInt32(numericUpDown1->Text) - Convert::ToInt32(num)) <= 10) {
			lblAnswer->Text = "Вы почти угадали :D \nНо загаданное число чуть меньше !)";
			account++;
		}
		else if ((Convert::ToInt32(numericUpDown1->Text) - Convert::ToInt32(num)) <= 30) {
			lblAnswer->Text = "Ну так прохладно еще :D \nЗагаданное число меньше !)";
			account++;
		}
		else if ((Convert::ToInt32(numericUpDown1->Text) - Convert::ToInt32(num)) <= 50) {
			lblAnswer->Text = "Число меньше! \nПримерно на 25*2 :D ";
			account++;
		}
		else if ((Convert::ToInt32(numericUpDown1->Text) - Convert::ToInt32(num)) <= 100) {
			lblAnswer->Text = "Число меньше! \nХолодно :D ";
			account++;
		}
		else if ((Convert::ToInt32(numericUpDown1->Text) - Convert::ToInt32(num)) <= 200) {
			lblAnswer->Text = "Число меньше! \nДалеко до победы :D ";
			account++;
		}
		else {
			lblAnswer->Text = "Число меньше на много меньше :D ";
			account++;
		}
	}
}
};
}
