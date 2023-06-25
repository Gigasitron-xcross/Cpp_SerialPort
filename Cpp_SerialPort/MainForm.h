#pragma once

namespace ArduinoTerminal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cboxCom;
	protected:
	private: System::Windows::Forms::ComboBox^ cboxBaud;
	private: System::Windows::Forms::Button^ btnConnect;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::IO::Ports::SerialPort^ Serial;
	private: System::Windows::Forms::TextBox^ tboxReceiveOutput;
	private: System::Windows::Forms::TextBox^ tboxTransmitData;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->cboxCom = (gcnew System::Windows::Forms::ComboBox());
			this->cboxBaud = (gcnew System::Windows::Forms::ComboBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->Serial = (gcnew System::IO::Ports::SerialPort(this->components));
			this->tboxReceiveOutput = (gcnew System::Windows::Forms::TextBox());
			this->tboxTransmitData = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cboxCom
			// 
			this->cboxCom->FormattingEnabled = true;
			this->cboxCom->Location = System::Drawing::Point(31, 24);
			this->cboxCom->Name = L"cboxCom";
			this->cboxCom->Size = System::Drawing::Size(121, 21);
			this->cboxCom->TabIndex = 0;
			// 
			// cboxBaud
			// 
			this->cboxBaud->FormattingEnabled = true;
			this->cboxBaud->Location = System::Drawing::Point(31, 51);
			this->cboxBaud->Name = L"cboxBaud";
			this->cboxBaud->Size = System::Drawing::Size(121, 21);
			this->cboxBaud->TabIndex = 1;
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(170, 24);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(75, 23);
			this->btnConnect->TabIndex = 2;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MainForm::btnConnect_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->Location = System::Drawing::Point(170, 49);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(75, 23);
			this->btnRefresh->TabIndex = 3;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &MainForm::btnRefresh_Click);
			// 
			// tboxReceiveOutput
			// 
			this->tboxReceiveOutput->Location = System::Drawing::Point(12, 105);
			this->tboxReceiveOutput->Multiline = true;
			this->tboxReceiveOutput->Name = L"tboxReceiveOutput";
			this->tboxReceiveOutput->Size = System::Drawing::Size(461, 165);
			this->tboxReceiveOutput->TabIndex = 4;
			// 
			// tboxTransmitData
			// 
			this->tboxTransmitData->Location = System::Drawing::Point(12, 305);
			this->tboxTransmitData->Multiline = true;
			this->tboxTransmitData->Name = L"tboxTransmitData";
			this->tboxTransmitData->Size = System::Drawing::Size(461, 82);
			this->tboxTransmitData->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"received data:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 289);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Transmit data:";
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(398, 393);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(75, 23);
			this->btnSend->TabIndex = 8;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &MainForm::btnSend_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(485, 442);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tboxTransmitData);
			this->Controls->Add(this->tboxReceiveOutput);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->btnConnect);
			this->Controls->Add(this->cboxBaud);
			this->Controls->Add(this->cboxCom);
			this->Name = L"MainForm";
			this->Text = L"Serial Port v1.0";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region LocalHelpers
	private: void UpdateComPortList() {
		array<System::String^>^ Port = SerialPort::GetPortNames();

		cboxCom->Items->Clear();
		for (int i=0; i<Port->Length; i++)
		{
			cboxCom->Items->Add(Port[i]);
		}
		

	}
#pragma endregion

#pragma region DelegatesHelpers
	private: delegate void CB_UPDATE_RX_DATA(String^ s); //array<Byte> ^pData

	private: void UpdateRxData(String^ s)
	{
		tboxReceiveOutput->Text += s;
		tboxReceiveOutput->ScrollToCaret();
	}
#pragma endregion


#pragma region EventHandlers
	private: System::Void SerialOnReceivedHandler(System::Object^ sender, SerialDataReceivedEventArgs^ e)
	{
		String^ s = Serial->ReadExisting();

		CB_UPDATE_RX_DATA^ cb = gcnew CB_UPDATE_RX_DATA(this, &MainForm::UpdateRxData);

		Control::Invoke(cb, s);

	}
#pragma endregion

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

		int baudrate[] = { 9600, 19200, 38400, 115200, 230400, 460800, 921600, 3860000 };
		cboxBaud->Items->Clear();
		for (int i = 0; i < sizeof(baudrate) / sizeof(int); i++)
		{
			cboxBaud->Items->Add(baudrate[i]);
		}

		UpdateComPortList();

	}

	private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateComPortList();
	}

	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check if current state is connected, then we need to disconnect it. This button works as a toggle mode.
		if ("Disconnect" == btnConnect->Text)
		{
			if (true == Serial->IsOpen)
			{
				Serial->Close();
			}

			btnConnect->Text = "Connect";

			return;
		}

		//Get User COM
		try
		{
			Serial->PortName = cboxCom->Text;
		}
		catch (...)
		{
			// Inform user must choose a COM port or connect his device
			MessageBox::Show("No COM Port was selected.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			return;
		}

		//Get User Baud
		try
		{
			Serial->BaudRate = int::Parse(cboxBaud->Text);
		}
		catch (...)
		{
			MessageBox::Show("No Baudrate was selected.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Serial Port Configuration
		Serial->Parity = Parity::None;
		Serial->DataBits = 8;				  // Using 8 bit datasize
		Serial->ReceivedBytesThreshold = 1;   //every byte trigger the event
		Serial->StopBits = StopBits::One;
		Serial->Handshake = Handshake::None;
		Serial->WriteTimeout = 500;			 // write fail timeout

		// Check if com port is opened by other application
		if (false == Serial->IsOpen)
		{
			try
			{
				// Com port available
				Serial->Open();
			}
			catch (...) //IO::IOException^ e
			{
				MessageBox::Show("The " + Serial->PortName + " is in use or not available.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

				return;
			}
		}

		// If the COM port is openned successfully
		if (true == Serial->IsOpen)
		{
			btnConnect->Text = "Disconnect";

			// Add a Receive callback handler. Event driven method is more efficient than pooling
			Serial->DataReceived += gcnew SerialDataReceivedEventHandler(this, &MainForm::SerialOnReceivedHandler);
		}
	}
private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {

	Serial->WriteLine(tboxTransmitData->Text);
}
};
}
