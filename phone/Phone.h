#pragma once

namespace phone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Phone
	/// </summary>
	public ref class Phone : public System::Windows::Forms::Form

	{
		 

	public:
		Phone(void)
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
		~Phone()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ phonelabel;
	protected:

	private: System::Windows::Forms::Label^ lastnamelabel;
	private: System::Windows::Forms::Label^ emaillabel;



	private: System::Windows::Forms::Button^ SaveButton;
	private: System::Windows::Forms::Button^ DeleteButton;
	private: System::Windows::Forms::TextBox^ firstnametextbox;
	private: System::Windows::Forms::TextBox^ lastnametextbox;
	private: System::Windows::Forms::TextBox^ phonetextbox;
	private: System::Windows::Forms::TextBox^ emailtextbox;











	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ searchtextbox;
	private: System::Windows::Forms::Button^ searchbutton;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ searchlabel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ firstnamelabel;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel2;


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
			this->phonelabel = (gcnew System::Windows::Forms::Label());
			this->lastnamelabel = (gcnew System::Windows::Forms::Label());
			this->emaillabel = (gcnew System::Windows::Forms::Label());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->firstnametextbox = (gcnew System::Windows::Forms::TextBox());
			this->lastnametextbox = (gcnew System::Windows::Forms::TextBox());
			this->phonetextbox = (gcnew System::Windows::Forms::TextBox());
			this->emailtextbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->searchtextbox = (gcnew System::Windows::Forms::TextBox());
			this->searchbutton = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->searchlabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->firstnamelabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// phonelabel
			// 
			this->phonelabel->AutoSize = true;
			this->phonelabel->BackColor = System::Drawing::SystemColors::Info;
			this->phonelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phonelabel->Location = System::Drawing::Point(1, 218);
			this->phonelabel->Name = L"phonelabel";
			this->phonelabel->Size = System::Drawing::Size(155, 25);
			this->phonelabel->TabIndex = 1;
			this->phonelabel->Text = L"Phone Number";
			// 
			// lastnamelabel
			// 
			this->lastnamelabel->AutoSize = true;
			this->lastnamelabel->BackColor = System::Drawing::SystemColors::Info;
			this->lastnamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->lastnamelabel->Location = System::Drawing::Point(12, 175);
			this->lastnamelabel->Name = L"lastnamelabel";
			this->lastnamelabel->Size = System::Drawing::Size(115, 25);
			this->lastnamelabel->TabIndex = 2;
			this->lastnamelabel->Text = L"Last Name";
			// 
			// emaillabel
			// 
			this->emaillabel->AutoSize = true;
			this->emaillabel->BackColor = System::Drawing::SystemColors::Info;
			this->emaillabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emaillabel->Location = System::Drawing::Point(72, 330);
			this->emaillabel->Name = L"emaillabel";
			this->emaillabel->Size = System::Drawing::Size(65, 25);
			this->emaillabel->TabIndex = 3;
			this->emaillabel->Text = L"Email";
			// 
			// SaveButton
			// 
			this->SaveButton->BackColor = System::Drawing::SystemColors::Info;
			this->SaveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->SaveButton->Location = System::Drawing::Point(505, 138);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(156, 111);
			this->SaveButton->TabIndex = 6;
			this->SaveButton->Text = L"SAVE/UPDATE";
			this->SaveButton->UseVisualStyleBackColor = false;
			this->SaveButton->Click += gcnew System::EventHandler(this, &Phone::SaveButton_Click);
			// 
			// DeleteButton
			// 
			this->DeleteButton->BackColor = System::Drawing::SystemColors::Info;
			this->DeleteButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->DeleteButton->Location = System::Drawing::Point(815, 142);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(152, 112);
			this->DeleteButton->TabIndex = 7;
			this->DeleteButton->Text = L"Delete";
			this->DeleteButton->UseVisualStyleBackColor = false;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &Phone::DeleteButton_Click);
			// 
			// firstnametextbox
			// 
			this->firstnametextbox->Location = System::Drawing::Point(180, 138);
			this->firstnametextbox->Name = L"firstnametextbox";
			this->firstnametextbox->Size = System::Drawing::Size(266, 26);
			this->firstnametextbox->TabIndex = 8;
			// 
			// lastnametextbox
			// 
			this->lastnametextbox->Location = System::Drawing::Point(180, 174);
			this->lastnametextbox->Name = L"lastnametextbox";
			this->lastnametextbox->Size = System::Drawing::Size(266, 26);
			this->lastnametextbox->TabIndex = 9;
			// 
			// phonetextbox
			// 
			this->phonetextbox->Location = System::Drawing::Point(180, 217);
			this->phonetextbox->Name = L"phonetextbox";
			this->phonetextbox->Size = System::Drawing::Size(266, 26);
			this->phonetextbox->TabIndex = 10;
			// 
			// emailtextbox
			// 
			this->emailtextbox->Location = System::Drawing::Point(180, 329);
			this->emailtextbox->Name = L"emailtextbox";
			this->emailtextbox->Size = System::Drawing::Size(266, 26);
			this->emailtextbox->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Info;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(653, 525);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 25);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Search For The Person";
			// 
			// searchtextbox
			// 
			this->searchtextbox->Location = System::Drawing::Point(919, 524);
			this->searchtextbox->Name = L"searchtextbox";
			this->searchtextbox->Size = System::Drawing::Size(178, 26);
			this->searchtextbox->TabIndex = 15;
			// 
			// searchbutton
			// 
			this->searchbutton->BackColor = System::Drawing::SystemColors::Info;
			this->searchbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchbutton->Location = System::Drawing::Point(741, 572);
			this->searchbutton->Name = L"searchbutton";
			this->searchbutton->Size = System::Drawing::Size(240, 47);
			this->searchbutton->TabIndex = 16;
			this->searchbutton->Text = L"Search";
			this->searchbutton->UseVisualStyleBackColor = false;
			this->searchbutton->Click += gcnew System::EventHandler(this, &Phone::searchbutton_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(55, 390);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(483, 184);
			this->listBox1->TabIndex = 17;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Phone::listBox1_SelectedIndexChanged);
			// 
			// searchlabel
			// 
			this->searchlabel->AutoSize = true;
			this->searchlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchlabel->Location = System::Drawing::Point(3, 50);
			this->searchlabel->Name = L"searchlabel";
			this->searchlabel->Size = System::Drawing::Size(110, 20);
			this->searchlabel->TabIndex = 18;
			this->searchlabel->Text = L"SearchData ";
			this->searchlabel->Click += gcnew System::EventHandler(this, &Phone::searchlabel_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->searchlabel);
			this->panel1->Location = System::Drawing::Point(553, 390);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(615, 128);
			this->panel1->TabIndex = 19;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Phone::panel1_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Info;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(72, 583);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(433, 25);
			this->label2->TabIndex = 20;
			this->label2->Text = L"SAVE/UPDATE DETAIL OF THE PERSON ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::MistyRose;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(86, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(348, 25);
			this->label3->TabIndex = 21;
			this->label3->Text = L"ADDITIONAL INFO OF THE USER";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::MistyRose;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(46, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(400, 25);
			this->label4->TabIndex = 22;
			this->label4->Text = L"ENTER THE DETAIL OF THE PERSON ";
			// 
			// firstnamelabel
			// 
			this->firstnamelabel->AutoSize = true;
			this->firstnamelabel->BackColor = System::Drawing::SystemColors::Info;
			this->firstnamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->firstnamelabel->Location = System::Drawing::Point(12, 137);
			this->firstnamelabel->Name = L"firstnamelabel";
			this->firstnamelabel->Size = System::Drawing::Size(116, 25);
			this->firstnamelabel->TabIndex = 0;
			this->firstnamelabel->Text = L"First Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Info;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(689, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 46);
			this->label5->TabIndex = 23;
			this->label5->Text = L"OR";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Info;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(369, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(423, 46);
			this->label6->TabIndex = 24;
			this->label6->Text = L"PHONE DIRECTORY";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->listBox1);
			this->panel2->Controls->Add(this->searchbutton);
			this->panel2->Controls->Add(this->searchtextbox);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->emailtextbox);
			this->panel2->Controls->Add(this->phonetextbox);
			this->panel2->Controls->Add(this->lastnametextbox);
			this->panel2->Controls->Add(this->firstnametextbox);
			this->panel2->Controls->Add(this->DeleteButton);
			this->panel2->Controls->Add(this->SaveButton);
			this->panel2->Controls->Add(this->emaillabel);
			this->panel2->Controls->Add(this->lastnamelabel);
			this->panel2->Controls->Add(this->phonelabel);
			this->panel2->Controls->Add(this->firstnamelabel);
			this->panel2->Location = System::Drawing::Point(10, 9);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1182, 631);
			this->panel2->TabIndex = 25;
			// 
			// Phone
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1204, 652);
			this->Controls->Add(this->panel2);
			this->Name = L"Phone";
			this->Text = L"Phone";
			this->Load += gcnew System::EventHandler(this, &Phone::Phone_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Phone_Load(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void NewButton_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void LoadButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Retrieve data from text boxes
	String^ firstName = firstnametextbox->Text;
	String^ lastName = lastnametextbox->Text;
	String^ phoneNumber = phonetextbox->Text;
	String^ email = emailtextbox->Text;

	// Check if the first name and phone number are not empty
	if (String::IsNullOrWhiteSpace(firstName)) {
		MessageBox::Show("First name is required.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (String::IsNullOrWhiteSpace(phoneNumber)) {
		MessageBox::Show("Phone number is required.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Format the contact details for display in the list box
	String^ contactDetails = String::Format("{0} | {1} | {2} | {3}", firstName, lastName, phoneNumber, email);

	// Check if any item is selected in the list box
	if (listBox1->SelectedItem != nullptr) {
		// Update the selected item in the list box with the modified contact details
		listBox1->Items[listBox1->SelectedIndex] = contactDetails;
	}
	else {
		// Add the formatted string to the list box if no item is selected
		listBox1->Items->Add(contactDetails);
	}

	// Clear the text boxes after saving the data
	firstnametextbox->Clear();
	lastnametextbox->Clear();
	phonetextbox->Clear();
	emailtextbox->Clear();
}
private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Check if any item is selected in the list box
	if (listBox1->SelectedItem != nullptr) {
		// Remove the selected item from the list box
		listBox1->Items->Remove(listBox1->SelectedItem);
	}
	else {
		// If no item is selected, show an error message
		MessageBox::Show("Please select an item to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void contactsDataGrid_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
}
private: System::Void searchbutton_Click(System::Object^ sender, System::EventArgs^ e) {

	// Retrieve the search term from the search text box
	String^ searchTerm = searchtextbox->Text;

	// Check if the search term is not empty
	if (String::IsNullOrWhiteSpace(searchTerm)) {
		MessageBox::Show("Please enter a search term.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Initialize a flag to indicate if a match was found
	bool matchFound = false;

	// Iterate through the items in the list box
	for (int i = 0; i < listBox1->Items->Count; i++) {
		String^ item = listBox1->Items[i]->ToString();

		// Check if the item contains the search term (case-insensitive)
		if (item->IndexOf(searchTerm, StringComparison::OrdinalIgnoreCase) >= 0) {
			// Display the matching item in the search label
			searchlabel->Text = "Search Result: " + item;
			matchFound = true;
			break;
		}
	}

	// If no match was found, show an error message
	if (!matchFound) {
		MessageBox::Show("User not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Clear the text boxes
	firstnametextbox->Text = "";
	lastnametextbox->Text = "";
	phonetextbox->Text = "";
	emailtextbox->Text = "";

	// Check if any item is selected in the list box
	if (listBox1->SelectedItem != nullptr) {
		// Split the selected item into its components
		String^ selectedContact = listBox1->SelectedItem->ToString();
		array<String^>^ contactDetails = selectedContact->Split('|');

		// Populate the text boxes with the selected contact's details
		if (contactDetails->Length >= 4) {
			firstnametextbox->Text = contactDetails[0]->Trim();
			lastnametextbox->Text = contactDetails[1]->Trim();
			phonetextbox->Text = contactDetails[2]->Trim();
			emailtextbox->Text = contactDetails[3]->Trim();
		}
	}


}
private: System::Void searchlabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}