#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btningresarN;
	private: System::Windows::Forms::Button^ botonnotas;
	private: System::Windows::Forms::Button^ botonasistencia;
	private: System::Windows::Forms::DataGridView^ dgvEstudiantes;

	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dgvnotas;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridView^ dgvassitencias;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::TextBox^ textocodigo;
	private: System::Windows::Forms::TextBox^ textonombre;
	private: System::Windows::Forms::TextBox^ textoapellido;
	private: System::Windows::Forms::TextBox^ textoedad;





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
			this->btningresarN = (gcnew System::Windows::Forms::Button());
			this->botonnotas = (gcnew System::Windows::Forms::Button());
			this->botonasistencia = (gcnew System::Windows::Forms::Button());
			this->dgvEstudiantes = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvnotas = (gcnew System::Windows::Forms::DataGridView());
			this->dgvassitencias = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textocodigo = (gcnew System::Windows::Forms::TextBox());
			this->textonombre = (gcnew System::Windows::Forms::TextBox());
			this->textoapellido = (gcnew System::Windows::Forms::TextBox());
			this->textoedad = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstudiantes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvnotas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvassitencias))->BeginInit();
			this->SuspendLayout();
			// 
			// btningresarN
			// 
			this->btningresarN->Location = System::Drawing::Point(648, 29);
			this->btningresarN->Name = L"btningresarN";
			this->btningresarN->Size = System::Drawing::Size(167, 48);
			this->btningresarN->TabIndex = 0;
			this->btningresarN->Text = L"Estudiante";
			this->btningresarN->UseVisualStyleBackColor = true;
			// 
			// botonnotas
			// 
			this->botonnotas->Location = System::Drawing::Point(648, 83);
			this->botonnotas->Name = L"botonnotas";
			this->botonnotas->Size = System::Drawing::Size(167, 48);
			this->botonnotas->TabIndex = 1;
			this->botonnotas->Text = L"Notas";
			this->botonnotas->UseVisualStyleBackColor = true;
			// 
			// botonasistencia
			// 
			this->botonasistencia->Location = System::Drawing::Point(648, 137);
			this->botonasistencia->Name = L"botonasistencia";
			this->botonasistencia->Size = System::Drawing::Size(167, 48);
			this->botonasistencia->TabIndex = 2;
			this->botonasistencia->Text = L"Asistencia";
			this->botonasistencia->UseVisualStyleBackColor = true;
			// 
			// dgvEstudiantes
			// 
			this->dgvEstudiantes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEstudiantes->Location = System::Drawing::Point(12, 416);
			this->dgvEstudiantes->Name = L"dgvEstudiantes";
			this->dgvEstudiantes->Size = System::Drawing::Size(857, 221);
			this->dgvEstudiantes->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Codigo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nombres";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Apellidos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Edad";
			// 
			// dgvnotas
			// 
			this->dgvnotas->AllowUserToAddRows = false;
			this->dgvnotas->AllowUserToDeleteRows = false;
			this->dgvnotas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvnotas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1, this->Column2,
					this->Column3, this->Column4
			});
			this->dgvnotas->Location = System::Drawing::Point(12, 254);
			this->dgvnotas->Name = L"dgvnotas";
			this->dgvnotas->ReadOnly = true;
			this->dgvnotas->Size = System::Drawing::Size(857, 75);
			this->dgvnotas->TabIndex = 8;
			// 
			// dgvassitencias
			// 
			this->dgvassitencias->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvassitencias->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column5,
					this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dgvassitencias->Location = System::Drawing::Point(12, 335);
			this->dgvassitencias->Name = L"dgvassitencias";
			this->dgvassitencias->Size = System::Drawing::Size(857, 75);
			this->dgvassitencias->TabIndex = 9;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"N1";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"N2";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"N3";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"N4";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"A1";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"A2";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"A3";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"A4";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"A5";
			this->Column9->Name = L"Column9";
			// 
			// textocodigo
			// 
			this->textocodigo->Location = System::Drawing::Point(114, 21);
			this->textocodigo->Name = L"textocodigo";
			this->textocodigo->Size = System::Drawing::Size(228, 20);
			this->textocodigo->TabIndex = 10;
			// 
			// textonombre
			// 
			this->textonombre->Location = System::Drawing::Point(114, 63);
			this->textonombre->Name = L"textonombre";
			this->textonombre->Size = System::Drawing::Size(228, 20);
			this->textonombre->TabIndex = 11;
			// 
			// textoapellido
			// 
			this->textoapellido->Location = System::Drawing::Point(114, 102);
			this->textoapellido->Name = L"textoapellido";
			this->textoapellido->Size = System::Drawing::Size(228, 20);
			this->textoapellido->TabIndex = 12;
			// 
			// textoedad
			// 
			this->textoedad->Location = System::Drawing::Point(114, 148);
			this->textoedad->Name = L"textoedad";
			this->textoedad->Size = System::Drawing::Size(228, 20);
			this->textoedad->TabIndex = 13;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 649);
			this->Controls->Add(this->textoedad);
			this->Controls->Add(this->textoapellido);
			this->Controls->Add(this->textonombre);
			this->Controls->Add(this->textocodigo);
			this->Controls->Add(this->dgvassitencias);
			this->Controls->Add(this->dgvnotas);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvEstudiantes);
			this->Controls->Add(this->botonasistencia);
			this->Controls->Add(this->botonnotas);
			this->Controls->Add(this->btningresarN);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PC1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEstudiantes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvnotas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvassitencias))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
