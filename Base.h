#pragma once
#include <algorithm>
#include <vector>
namespace scan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Base
	/// </summary>
	public ref class Base : public System::Windows::Forms::Form
	{
	public:
		Base(void)
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
		~Base()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ListBox^ Serve_sequence_listBox;

	private: System::Windows::Forms::ListBox^ Request_listBox;
	private: System::Windows::Forms::Button^ Add_Request_button;
	private: System::Windows::Forms::Label^ Reqest_label;

	private: System::Windows::Forms::TextBox^ Request_textBox;
	private: System::Windows::Forms::Button^ SCAN_button;
	private: System::Windows::Forms::TextBox^ head_position_textBox;
	private: System::Windows::Forms::TextBox^ Disk_Cylinder_textBox;
	private: System::Windows::Forms::ComboBox^ direction_comboBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->direction_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Disk_Cylinder_textBox = (gcnew System::Windows::Forms::TextBox());
			this->head_position_textBox = (gcnew System::Windows::Forms::TextBox());
			this->SCAN_button = (gcnew System::Windows::Forms::Button());
			this->Serve_sequence_listBox = (gcnew System::Windows::Forms::ListBox());
			this->Request_listBox = (gcnew System::Windows::Forms::ListBox());
			this->Add_Request_button = (gcnew System::Windows::Forms::Button());
			this->Reqest_label = (gcnew System::Windows::Forms::Label());
			this->Request_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->direction_comboBox);
			this->panel1->Controls->Add(this->Disk_Cylinder_textBox);
			this->panel1->Controls->Add(this->head_position_textBox);
			this->panel1->Controls->Add(this->SCAN_button);
			this->panel1->Controls->Add(this->Serve_sequence_listBox);
			this->panel1->Controls->Add(this->Request_listBox);
			this->panel1->Controls->Add(this->Add_Request_button);
			this->panel1->Controls->Add(this->Reqest_label);
			this->panel1->Controls->Add(this->Request_textBox);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1676, 550);
			this->panel1->TabIndex = 0;
			// 
			// direction_comboBox
			// 
			this->direction_comboBox->FormattingEnabled = true;
			this->direction_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Right", L"Left" });
			this->direction_comboBox->Location = System::Drawing::Point(1004, 216);
			this->direction_comboBox->Name = L"direction_comboBox";
			this->direction_comboBox->Size = System::Drawing::Size(121, 24);
			this->direction_comboBox->TabIndex = 8;
			// 
			// Disk_Cylinder_textBox
			// 
			this->Disk_Cylinder_textBox->Location = System::Drawing::Point(1004, 150);
			this->Disk_Cylinder_textBox->Name = L"Disk_Cylinder_textBox";
			this->Disk_Cylinder_textBox->Size = System::Drawing::Size(140, 22);
			this->Disk_Cylinder_textBox->TabIndex = 7;
			this->Disk_Cylinder_textBox->Text = L"Disk Cylinder Size";
			// 
			// head_position_textBox
			// 
			this->head_position_textBox->Location = System::Drawing::Point(1004, 95);
			this->head_position_textBox->Name = L"head_position_textBox";
			this->head_position_textBox->Size = System::Drawing::Size(100, 22);
			this->head_position_textBox->TabIndex = 6;
			this->head_position_textBox->Text = L"Head Position";
			// 
			// SCAN_button
			// 
			this->SCAN_button->BackColor = System::Drawing::SystemColors::Menu;
			this->SCAN_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SCAN_button->Location = System::Drawing::Point(1195, 150);
			this->SCAN_button->Name = L"SCAN_button";
			this->SCAN_button->Size = System::Drawing::Size(118, 59);
			this->SCAN_button->TabIndex = 5;
			this->SCAN_button->Text = L"SCAN";
			this->SCAN_button->UseVisualStyleBackColor = false;
			this->SCAN_button->Click += gcnew System::EventHandler(this, &Base::SCAN_button_Click);
			// 
			// Serve_sequence_listBox
			// 
			this->Serve_sequence_listBox->FormattingEnabled = true;
			this->Serve_sequence_listBox->ItemHeight = 16;
			this->Serve_sequence_listBox->Location = System::Drawing::Point(1377, 47);
			this->Serve_sequence_listBox->Name = L"Serve_sequence_listBox";
			this->Serve_sequence_listBox->Size = System::Drawing::Size(81, 308);
			this->Serve_sequence_listBox->TabIndex = 4;
			// 
			// Request_listBox
			// 
			this->Request_listBox->FormattingEnabled = true;
			this->Request_listBox->ItemHeight = 16;
			this->Request_listBox->Location = System::Drawing::Point(440, 69);
			this->Request_listBox->Name = L"Request_listBox";
			this->Request_listBox->Size = System::Drawing::Size(104, 260);
			this->Request_listBox->TabIndex = 3;
			// 
			// Add_Request_button
			// 
			this->Add_Request_button->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Add_Request_button->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add_Request_button->Location = System::Drawing::Point(295, 176);
			this->Add_Request_button->Name = L"Add_Request_button";
			this->Add_Request_button->Size = System::Drawing::Size(88, 49);
			this->Add_Request_button->TabIndex = 2;
			this->Add_Request_button->Text = L"Add";
			this->Add_Request_button->UseVisualStyleBackColor = false;
			this->Add_Request_button->Click += gcnew System::EventHandler(this, &Base::Add_Request_button_Click);
			// 
			// Reqest_label
			// 
			this->Reqest_label->AutoSize = true;
			this->Reqest_label->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reqest_label->Location = System::Drawing::Point(69, 93);
			this->Reqest_label->Name = L"Reqest_label";
			this->Reqest_label->Size = System::Drawing::Size(208, 23);
			this->Reqest_label->TabIndex = 1;
			this->Reqest_label->Text = L"Enter your task Requests";
			// 
			// Request_textBox
			// 
			this->Request_textBox->Location = System::Drawing::Point(304, 95);
			this->Request_textBox->Name = L"Request_textBox";
			this->Request_textBox->Size = System::Drawing::Size(100, 22);
			this->Request_textBox->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(817, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 23);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Head\\Start Position";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(817, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 23);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Disk Cylinder Size";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(817, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 23);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Direction";
			// 
			// Base
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1676, 550);
			this->Controls->Add(this->panel1);
			this->Name = L"Base";
			this->Text = L"Base";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//declare an array or list to store the requests
		List<int>^ requests = gcnew List<int>();
		List<int>^ result = gcnew List<int>();

		//Vector<int>^ request = gcnew Vector<int>();

		void PopulateRequestListBox() {
			Request_listBox->Items->Clear(); // Clear the existing items

			// Loop through the requests list and add each request to the Request_listBox
			for each (int request in requests) {
				Request_listBox->Items->Add(request);
			}
		}

		void PopulateServeSequenceListBox() {
			Serve_sequence_listBox->Items->Clear(); // Clear the existing items

			// Loop through the result list and add each item to the Serve_sequence_listBox
			for each (int item in result) {
				Serve_sequence_listBox->Items->Add(item);
			}
		}

		// Function to implement SCAN disk scheduling algorithm
		void SCAN(bool direction) {
			// Retrieve head position and disk size
			int head = System::Convert::ToInt32(head_position_textBox->Text);
			int disk_size = System::Convert::ToInt32(Disk_Cylinder_textBox->Text);

			// Copy the requests to a local list for sorting
			List<int>^ sortedRequests = gcnew List<int>(requests);
			sortedRequests->Sort();

			// Find index where head is positioned
			int headIndex = 0;
			for (int i = 0; i < sortedRequests->Count; i++) {
				if (sortedRequests[i] >= head) {
					headIndex = i;
					break;
				}
			}

			// Move head in the initial direction, servicing requests
			int currentIndex = direction ? headIndex : headIndex - 1;
			int currentCylinder = head;
			while (currentIndex >= 0 && currentIndex < sortedRequests->Count) {
				 currentCylinder = sortedRequests[currentIndex];
				result->Add(currentCylinder);
				currentIndex += (direction ? 1 : -1);
			}

			// Add the maximum or minimum cylinder based on the direction
			int finalCylinder = direction ? disk_size - 1 : 0;
			result->Add(finalCylinder);

			// Change direction of head movement
			direction = !direction;

			// Reset currentIndex to headIndex
			currentIndex = direction?headIndex+1 : headIndex-1;

			// Continue moving head in the opposite direction, servicing requests
			while (currentIndex >= 0 && currentIndex < sortedRequests->Count) {
				currentCylinder = sortedRequests[currentIndex];
				result->Add(currentCylinder);
				currentIndex += (direction ? 1 : -1);
			}
		}




	private: System::Void Add_Request_button_Click(System::Object^ sender, System::EventArgs^ e) {

		
		
		// Take request from the text box Request_textBox and save 
		int requestValue;
		if (Int32::TryParse(Request_textBox->Text, requestValue)) {
			requests->Add(requestValue);
			// Optionally, you can update the UI or perform other actions here
		}
		else {
			// Handle invalid input from the user
		}
		PopulateRequestListBox();

		Request_textBox->Clear();
	}
private: System::Void SCAN_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (direction_comboBox->SelectedIndex == -1) {
		MessageBox::Show("Please select a direction.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return; // Exit the method
	}

	// Determine the direction based on the selected item
	bool movingRight;
	if (direction_comboBox->SelectedItem->ToString() == "Right") {
		movingRight = true;
	}
	else { // Assume "Left" for any other selected value
		movingRight = false;
	}

	result->Clear();

	SCAN(movingRight);

	PopulateServeSequenceListBox();

}
};
}
