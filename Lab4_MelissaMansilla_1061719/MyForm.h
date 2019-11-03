#pragma once
#include "Pokemon.h"
#include "MetodosOrden.h"
#include "Lista.h"
#include "Nodo.h"

namespace Lab4MelissaMansilla1061719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

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
	private: System::Windows::Forms::ListBox^  Pokedex;
	protected:

	private: System::Windows::Forms::Button^  btnOrGenQS;
	private: System::Windows::Forms::Button^  btnOrNumQS;
	private: System::Windows::Forms::Button^  btnOrNumBS;



	private: System::Windows::Forms::Button^  btnOrGenBS;
	private: System::Windows::Forms::Button^  btnOrNumBoS;



	private: System::Windows::Forms::Button^  btnOrGenBoS;

	private: System::Windows::Forms::Label^  lblQuick;
	private: System::Windows::Forms::Label^  lblBubble;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblTiempoEj;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Pokedex = (gcnew System::Windows::Forms::ListBox());
			this->btnOrGenQS = (gcnew System::Windows::Forms::Button());
			this->btnOrNumQS = (gcnew System::Windows::Forms::Button());
			this->btnOrNumBS = (gcnew System::Windows::Forms::Button());
			this->btnOrGenBS = (gcnew System::Windows::Forms::Button());
			this->btnOrNumBoS = (gcnew System::Windows::Forms::Button());
			this->btnOrGenBoS = (gcnew System::Windows::Forms::Button());
			this->lblQuick = (gcnew System::Windows::Forms::Label());
			this->lblBubble = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblTiempoEj = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Pokedex
			// 
			this->Pokedex->BackColor = System::Drawing::Color::SkyBlue;
			this->Pokedex->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Pokedex->Font = (gcnew System::Drawing::Font(L"NSimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pokedex->FormattingEnabled = true;
			this->Pokedex->ItemHeight = 24;
			this->Pokedex->Location = System::Drawing::Point(259, 85);
			this->Pokedex->Name = L"Pokedex";
			this->Pokedex->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Pokedex->Size = System::Drawing::Size(425, 384);
			this->Pokedex->TabIndex = 0;
			this->Pokedex->UseWaitCursor = true;
			// 
			// btnOrGenQS
			// 
			this->btnOrGenQS->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnOrGenQS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOrGenQS->Font = (gcnew System::Drawing::Font(L"NSimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOrGenQS->Location = System::Drawing::Point(73, 102);
			this->btnOrGenQS->Name = L"btnOrGenQS";
			this->btnOrGenQS->Size = System::Drawing::Size(146, 68);
			this->btnOrGenQS->TabIndex = 1;
			this->btnOrGenQS->Text = L"Generation #";
			this->btnOrGenQS->UseVisualStyleBackColor = false;
			this->btnOrGenQS->Click += gcnew System::EventHandler(this, &MyForm::btnOrGenQS_Click);
			// 
			// btnOrNumQS
			// 
			this->btnOrNumQS->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnOrNumQS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOrNumQS->Font = (gcnew System::Drawing::Font(L"NSimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOrNumQS->Location = System::Drawing::Point(73, 187);
			this->btnOrNumQS->Name = L"btnOrNumQS";
			this->btnOrNumQS->Size = System::Drawing::Size(146, 68);
			this->btnOrNumQS->TabIndex = 2;
			this->btnOrNumQS->Text = L"National #";
			this->btnOrNumQS->UseVisualStyleBackColor = false;
			this->btnOrNumQS->Click += gcnew System::EventHandler(this, &MyForm::btnOrNumQS_Click);
			// 
			// btnOrNumBS
			// 
			this->btnOrNumBS->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnOrNumBS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOrNumBS->Font = (gcnew System::Drawing::Font(L"NSimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOrNumBS->Location = System::Drawing::Point(73, 399);
			this->btnOrNumBS->Name = L"btnOrNumBS";
			this->btnOrNumBS->Size = System::Drawing::Size(146, 68);
			this->btnOrNumBS->TabIndex = 4;
			this->btnOrNumBS->Text = L"National #";
			this->btnOrNumBS->UseVisualStyleBackColor = false;
			this->btnOrNumBS->Click += gcnew System::EventHandler(this, &MyForm::btnOrNumBS_Click);
			// 
			// btnOrGenBS
			// 
			this->btnOrGenBS->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnOrGenBS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOrGenBS->Font = (gcnew System::Drawing::Font(L"NSimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOrGenBS->Location = System::Drawing::Point(73, 314);
			this->btnOrGenBS->Name = L"btnOrGenBS";
			this->btnOrGenBS->Size = System::Drawing::Size(146, 68);
			this->btnOrGenBS->TabIndex = 3;
			this->btnOrGenBS->Text = L"Generation #";
			this->btnOrGenBS->UseVisualStyleBackColor = false;
			this->btnOrGenBS->Click += gcnew System::EventHandler(this, &MyForm::btnOrGenBS_Click);
			// 
			// btnOrNumBoS
			// 
			this->btnOrNumBoS->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnOrNumBoS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOrNumBoS->Font = (gcnew System::Drawing::Font(L"NSimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOrNumBoS->Location = System::Drawing::Point(717, 206);
			this->btnOrNumBoS->Name = L"btnOrNumBoS";
			this->btnOrNumBoS->Size = System::Drawing::Size(146, 68);
			this->btnOrNumBoS->TabIndex = 6;
			this->btnOrNumBoS->Text = L"National #";
			this->btnOrNumBoS->UseVisualStyleBackColor = false;
			this->btnOrNumBoS->Click += gcnew System::EventHandler(this, &MyForm::btnOrNumBoS_Click);
			// 
			// btnOrGenBoS
			// 
			this->btnOrGenBoS->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnOrGenBoS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOrGenBoS->Font = (gcnew System::Drawing::Font(L"NSimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOrGenBoS->Location = System::Drawing::Point(717, 121);
			this->btnOrGenBoS->Name = L"btnOrGenBoS";
			this->btnOrGenBoS->Size = System::Drawing::Size(146, 68);
			this->btnOrGenBoS->TabIndex = 5;
			this->btnOrGenBoS->Text = L"Generation #";
			this->btnOrGenBoS->UseVisualStyleBackColor = false;
			this->btnOrGenBoS->Click += gcnew System::EventHandler(this, &MyForm::btnOrGenBoS_Click);
			// 
			// lblQuick
			// 
			this->lblQuick->AutoSize = true;
			this->lblQuick->BackColor = System::Drawing::Color::Transparent;
			this->lblQuick->Location = System::Drawing::Point(103, 69);
			this->lblQuick->Name = L"lblQuick";
			this->lblQuick->Size = System::Drawing::Size(83, 20);
			this->lblQuick->TabIndex = 7;
			this->lblQuick->Text = L"Quick Sort";
			// 
			// lblBubble
			// 
			this->lblBubble->AutoSize = true;
			this->lblBubble->BackColor = System::Drawing::Color::Transparent;
			this->lblBubble->Location = System::Drawing::Point(103, 281);
			this->lblBubble->Name = L"lblBubble";
			this->lblBubble->Size = System::Drawing::Size(93, 20);
			this->lblBubble->TabIndex = 8;
			this->lblBubble->Text = L"Bubble Sort";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(742, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Bogo Sort";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(168, 522);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Tiempo de Ejecución:";
			// 
			// lblTiempoEj
			// 
			this->lblTiempoEj->AutoSize = true;
			this->lblTiempoEj->BackColor = System::Drawing::Color::Transparent;
			this->lblTiempoEj->Location = System::Drawing::Point(334, 522);
			this->lblTiempoEj->Name = L"lblTiempoEj";
			this->lblTiempoEj->Size = System::Drawing::Size(71, 20);
			this->lblTiempoEj->TabIndex = 11;
			this->lblTiempoEj->Text = L"00:00:00";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(976, 565);
			this->Controls->Add(this->lblTiempoEj);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblBubble);
			this->Controls->Add(this->lblQuick);
			this->Controls->Add(this->btnOrNumBoS);
			this->Controls->Add(this->btnOrGenBoS);
			this->Controls->Add(this->btnOrNumBS);
			this->Controls->Add(this->btnOrGenBS);
			this->Controls->Add(this->btnOrNumQS);
			this->Controls->Add(this->btnOrGenQS);
			this->Controls->Add(this->Pokedex);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion
		Lista* ListaP = new Lista();
		Pokemon* PokemonP = new Pokemon();
		MetodosOrden* Orden = new MetodosOrden();

public: void MostrarGen() 
{
	StreamReader^ streamReader = gcnew StreamReader("..//Pokemonlista.txt");
	String^ PokemonLista2 = streamReader->ReadToEnd();
	int relleno[70] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int cont = 0;
	
	Nodo *aux = new Nodo();
	aux = ListaP->HeadL; 
	while (aux != nullptr && relleno[cont] == 0)
	{
		relleno[cont] = aux->numeroNac.numeNac; 
		cont++;
		aux = aux->siguiente;
	}
	cont = 0;
	for (int j = 0; j < 70; j++)
	{
		StreamReader^ ListaPoke = gcnew StreamReader("..//Pokemonlista.txt");
		int pos1 = 0;
		int generacion;
		bool find = false;
		String^ name1;
		String^ numNac1;
		String^ NumGen1;
		String^ aux1;
		String^ string;
		String^ fstring;
		//Proceso que ayuda a encontrar si el numero nacional existe en la lista ya creada.
		while (find == false)
		{
			string = ListaPoke->ReadLine();
			fstring = string;

			pos1 = string->IndexOf(",");
			NumGen1 = string->Substring(0, pos1);
			aux1 = string;
			string = aux1->Substring(pos1 + 1);

			pos1 = string->IndexOf(",");
			numNac1 = string->Substring(0, pos1);
			aux1 = string;
			string = aux1->Substring(pos1 + 1);

			pos1 = string->IndexOf(".");
			name1 = string->Substring(0, pos1);
			aux1 = string;
			string = aux1->Substring(pos1 + 1);

			int N = int::Parse(numNac1);// Conversion en la cual es vital para la comparación si este numero existe o no en la lista.
			fstring = NumGen1 + ", " + numNac1 + ", " + name1;
			if (N == relleno[cont]) //Validacion en la que se realiza si el numero obtenido en el readline es igual al del vector este se agrega a la lista del display, al aumentarse el contador aumenta el numero de linea a comparar.
			{
				find = true;
				Pokedex->Items->Add(fstring);
				cont++; 
			}
		}
	}
}
public: void MostrarNac()
{
	StreamReader^ streamReader = gcnew StreamReader("..//Pokemonlista.txt");
	String^ PokemonLista2 = streamReader->ReadToEnd();
	int relleno[70] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int cont = 0;

	Nodo *aux = new Nodo();
	aux = ListaP->HeadL;
	while (aux != nullptr && relleno[cont] == 0)
	{
		relleno[cont] = aux->numeroNac.numeNac;
		cont++;
		aux = aux->siguiente;
	}
	cont = 0;
	for (int j = 0; j < 70; j++)
	{
		StreamReader^ ListaPoke = gcnew StreamReader("..//Pokemonlista.txt");
		int pos1 = 0;
		int generacion;
		bool find = false;
		String^ name1;
		String^ numNac1;
		String^ NumGen1;
		String^ aux1;
		String^ string;
		String^ fstring;
		//Proceso que ayuda a encontrar si el numero nacional existe en la lista ya creada.
		while (find == false)
		{
			string = ListaPoke->ReadLine();
			fstring = string;

			pos1 = string->IndexOf(",");
			NumGen1 = string->Substring(0, pos1);
			aux1 = string;
			string = aux1->Substring(pos1 + 1);

			pos1 = string->IndexOf(",");
			numNac1 = string->Substring(0, pos1);
			aux1 = string;
			string = aux1->Substring(pos1 + 1);

			pos1 = string->IndexOf(".");
			name1 = string->Substring(0, pos1);
			aux1 = string;
			string = aux1->Substring(pos1 + 1);

			int N = int::Parse(numNac1);// Conversion en la cual es vital para la comparación si este numero existe o no en la lista.
			fstring = numNac1 + ", " + NumGen1 + ", " + name1;
			if (N == relleno[cont]) //Validacion en la que se realiza si el numero obtenido en el readline es igual al del vector este se agrega a la lista del display, al aumentarse el contador aumenta el numero de linea a comparar.
			{
				find = true;
				Pokedex->Items->Add(fstring);
				cont++;
			}
		}
	}
}
private: System::Void btnOrGenQS_Click(System::Object^  sender, System::EventArgs^  e) {
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		StreamReader^ streamReader = gcnew StreamReader("..//Pokemonlista.txt");
		String^ PokemonLista = streamReader->ReadToEnd();

		int pos;
		int generacion;

		String^ name;
		String^ numNac;
		String^ NumGen;
		String^ aux;

		while (PokemonLista != "")
		{
			pos = PokemonLista->IndexOf(",");
			NumGen = PokemonLista->Substring(0, pos);
			aux = PokemonLista;
			PokemonLista = aux->Substring(pos + 1);

			pos = PokemonLista->IndexOf(",");
			numNac = PokemonLista->Substring(0, pos);
			aux = PokemonLista;
			PokemonLista = aux->Substring(pos + 1);

			pos = PokemonLista->IndexOf(".");
			name = PokemonLista->Substring(0, pos);
			aux = PokemonLista;
			PokemonLista = aux->Substring(pos + 1);

			PokemonP->gen = System::Convert::ToInt32(NumGen);
			PokemonP->numeNac = System::Convert::ToInt32(numNac);
			
			int nacional = PokemonP->numeNac;
			generacion = PokemonP->gen;
			ListaP->Push(nacional);
		}
		Nodo* aux1;
		int relleno[70] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
		int i = 0;
		aux1 = ListaP->HeadL;
		while (aux1 != nullptr && relleno[i] == 0)
		{
			relleno[i] = aux1->numeroNac.numeNac;
			aux1 = aux1->siguiente;
			i++;
		}

		Orden->QuickS(relleno,0,70);

		for (int j = 0; j < 70; j++)
		{
			if (relleno[j] != 0)
			{
				ListaP->Push(relleno[j]);
			}
		}
		MostrarGen();
		Timer->Stop();
		lblTiempoEj->Text = System::Convert::ToString(Timer->Elapsed);
	}
private: System::Void btnOrNumQS_Click(System::Object^  sender, System::EventArgs^  e) {
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	StreamReader^ streamReader = gcnew StreamReader("..//Pokemonlista.txt");
	String^ PokemonLista = streamReader->ReadToEnd();

	int pos;
	int generacion;

	String^ name;
	String^ numNac;
	String^ NumGen;
	String^ aux;

	while (PokemonLista != "")
	{
		pos = PokemonLista->IndexOf(",");
		NumGen = PokemonLista->Substring(0, pos);
		aux = PokemonLista;
		PokemonLista = aux->Substring(pos + 1);

		pos = PokemonLista->IndexOf(",");
		numNac = PokemonLista->Substring(0, pos);
		aux = PokemonLista;
		PokemonLista = aux->Substring(pos + 1);

		pos = PokemonLista->IndexOf(".");
		name = PokemonLista->Substring(0, pos);
		aux = PokemonLista;
		PokemonLista = aux->Substring(pos + 1);

		PokemonP->gen = System::Convert::ToInt32(NumGen);
		PokemonP->numeNac = System::Convert::ToInt32(numNac);

		int nacional = PokemonP->numeNac;
		generacion = PokemonP->gen;
		ListaP->Push(nacional);
	}
	Nodo* aux1;
	int relleno[70] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int i = 0;
	aux1 = ListaP->HeadL;
	while (aux1 != nullptr && relleno[i] == 0)
	{
		relleno[i] = aux1->numeroNac.numeNac;
		aux1 = aux1->siguiente;
		i++;
	}

	Orden->QuickS(relleno, 0, 70);

	for (int j = 0; j < 70; j++)
	{
		if (relleno[j] != 0)
		{
			ListaP->Push(relleno[j]);
		}
	}
	MostrarNac();
	Timer->Stop();
	lblTiempoEj->Text = System::Convert::ToString(Timer->Elapsed);
	}

private: System::Void btnOrGenBS_Click(System::Object^  sender, System::EventArgs^  e) {
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	StreamReader^ streamReader = gcnew StreamReader("..//Pokemonlista.txt");
	String^ PokemonLista = streamReader->ReadToEnd();

	int pos;
	int generacion;

	String^ name;
	String^ numNac;
	String^ NumGen;
	String^ aux;

	while (PokemonLista != "")
	{
		pos = PokemonLista->IndexOf(",");
		NumGen = PokemonLista->Substring(0, pos);
		aux = PokemonLista;
		PokemonLista = aux->Substring(pos + 1);

		pos = PokemonLista->IndexOf(",");
		numNac = PokemonLista->Substring(0, pos);
		aux = PokemonLista;
		PokemonLista = aux->Substring(pos + 1);

		pos = PokemonLista->IndexOf(".");
		name = PokemonLista->Substring(0, pos);
		aux = PokemonLista;
		PokemonLista = aux->Substring(pos + 1);

		PokemonP->gen = System::Convert::ToInt32(NumGen);
		PokemonP->numeNac = System::Convert::ToInt32(numNac);

		int nacional = PokemonP->numeNac;
		generacion = PokemonP->gen;
		ListaP->Push(nacional);
	}
	Nodo* aux1;
	int relleno[70] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int i = 0;
	aux1 = ListaP->HeadL;
	while (aux1 != nullptr && relleno[i]==0)
	{
		relleno[i] = aux1->numeroNac.numeNac;
		aux1 = aux1->siguiente;
		i++;
	}

	Orden->BubbleS(relleno, 70);

	for (int j = 0; j < 70; j++)
	{
		if (relleno[j] != 0)
		{
			ListaP->Push(relleno[j]);
		}
	}
	MostrarGen();
	Timer->Stop();
	lblTiempoEj->Text = System::Convert::ToString(Timer->Elapsed);
}
private: System::Void btnOrNumBS_Click(System::Object^  sender, System::EventArgs^  e) {
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	StreamReader^ streamReader = gcnew StreamReader("..//Pokemonlista.txt");
	String^ PokemonLista = streamReader->ReadToEnd();

	int pos;
	int generacion;

	String^ name;
	String^ numNac;
	String^ NumGen;
	String^ aux;

	while (PokemonLista != "")
	{
		pos = PokemonLista->IndexOf(",");
		NumGen = PokemonLista->Substring(0, pos);
		aux = PokemonLista;
		PokemonLista = aux->Substring(pos + 1);

		pos = PokemonLista->IndexOf(",");
		numNac = PokemonLista->Substring(0, pos);
		aux = PokemonLista;
		PokemonLista = aux->Substring(pos + 1);

		pos = PokemonLista->IndexOf(".");
		name = PokemonLista->Substring(0, pos);
		aux = PokemonLista;
		PokemonLista = aux->Substring(pos + 1);

		PokemonP->gen = System::Convert::ToInt32(NumGen);
		PokemonP->numeNac = System::Convert::ToInt32(numNac);

		int nacional = PokemonP->numeNac;
		generacion = PokemonP->gen;
		ListaP->Push(nacional);
	}
	Nodo* aux1;
	int relleno[70] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int i = 0;
	aux1 = ListaP->HeadL;
	while (aux1 != nullptr && relleno[i] == 0)
	{
		relleno[i] = aux1->numeroNac.numeNac;
		aux1 = aux1->siguiente;
		i++;
	}

	Orden->BubbleS(relleno, 70);

	for (int j = 0; j < 70; j++)
	{
		if (relleno[j] != 0)
		{
			ListaP->Push(relleno[j]);
		}
	}
	MostrarNac();
	Timer->Stop();
	lblTiempoEj->Text = System::Convert::ToString(Timer->Elapsed);
}


private: System::Void btnOrGenBoS_Click(System::Object^  sender, System::EventArgs^  e) {
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	StreamReader^ streamReader = gcnew StreamReader("..//Pokemonlista.txt");
	String^ PokemonLista = streamReader->ReadToEnd();
	Pokedex->Items->Add(PokemonLista);
	Timer->Stop();
	lblTiempoEj->Text = System::Convert::ToString(Timer->Elapsed);
}
private: System::Void btnOrNumBoS_Click(System::Object^  sender, System::EventArgs^  e) {
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	StreamReader^ streamReader = gcnew StreamReader("..//Pokemonlista.txt");
	String^ PokemonLista = streamReader->ReadToEnd();
	Pokedex->Items->Add(PokemonLista);
	Timer->Stop();
	lblTiempoEj->Text = System::Convert::ToString(Timer->Elapsed);
}
};
}
