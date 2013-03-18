void Initialize();
void MainScreen();
void SelectLevel();
void GameStart( char _levelName[] );
void Ranking();
void Credit();
void ColorChange( char _string[], char _variable, int _color );

void Initialize()
{
	SetConsoleTitle( "::PUSH PUSH:: by KSY CYJ" );
	system( "mode con lines=16 cols=41" );
	system( "color 0E" );
	system( "cls" );
}

//�Լ� �����ε��� �Ұ����Ͽ� �ּ�ó��
/*void ColorChange( char _string[] )
{
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 15 );
	printf( _string );
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 14 );
}*/
void ColorChange( char _string[], char _variable[], int _color )
{
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), _color );
	printf( _string, _variable );
	SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 14 );
}
void MainScreen()
{
	char m_select = -1;

	system( "cls" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��        ");
	ColorChange( "P U S H      P U S H", NULL, 15 );
	printf( "        ��\n" );
	printf( "��             By KSY CYJ             ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��                                    ��\n" );
	printf( "��  " );
	ColorChange( "�� [ S ] ���� ����", NULL, 15 );
	printf( "                ��\n" );
	printf( "��                                    ��\n" );
	printf( "��  " );
	ColorChange( "�� [ R ] ��ŷ", NULL, 15 );
	printf( "                     ��\n" );
	printf( "��                                    ��\n" );
	printf( "��  ");
	ColorChange( "�� [ C ] ũ����", NULL, 15 );
	printf( "                   ��\n" );
	printf( "��                                    ��\n" );
	printf( "��                                    ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );

	while( !(( m_select=='s' )||( m_select=='r' )||( m_select=='c' ) ) )
	{
		m_select = getch();
		switch( m_select )
		{
			case 's':
				//printf( "\a" );
				SelectLevel();
				break;
			case 'r':
				//printf( "\a" );
				Ranking();
				break;
			case 'c':
				//printf( "\a" );
				Credit();
				break;
			default:
				break;
		}	
	}
};

void SelectLevel()
{
	char m_select = -1;

	system( "cls" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��        ");
	ColorChange( "P U S H      P U S H", NULL, 15 );
	printf( "        ��\n" );
	printf( "��             By KSY CYJ             ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��           " );
	ColorChange( "�� �������� ��", NULL, 15 );
	printf( "           ��\n" );
	printf( "��                                    ��\n" );
	printf( "��  ");
	ColorChange( "�� [ 1 ] Level 1", NULL, 15 );
	printf("                  ��\n" );
	printf( "��                                    ��\n" );
	printf( "��                                    ��\n" );
	printf( "��                                    ��\n" );
	printf( "��          ���ư����� [R]Ű          ��\n" );
	printf( "��                                    ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );

	while( !(( m_select=='1' )||( m_select=='r' )) )
	{
		m_select = getch();
		switch( m_select )
		{
			case '1':
				//printf( "\a" );
				GameStart( "level1.dat" );
				break;
			case 'r':
				//printf( "\a" );
				MainScreen();
				break;
			default:
				break;
		}	
	}
};

void Ranking()
{
	char m_select = -1;
	char test[10]="������";
	char test2[10]="�輺��";

	system( "cls" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��        ");
	ColorChange( "P U S H      P U S H", NULL, 15 );
	printf( "        ��\n" );
	printf( "��             By KSY CYJ             ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��            ");
	ColorChange( "�� ��ŷ ��", NULL, 15 );
	printf("              ��\n" );
	printf( "��  " );
	ColorChange( "���� %3s", test, 15 );
	printf("                       ��\n" );
	printf( "��  " );
	ColorChange( "���� %3s", test, 15 );
	printf("                       ��\n" );
	printf( "��  " );
	ColorChange( "���� %3s", test, 15 );
	printf("                       ��\n" );
	printf( "��  " );
	ColorChange( "���� %3s", test, 15 );
	printf("                       ��\n" );
	printf( "��  " );
	ColorChange( "��[����] %3s", test2, 15 );
	printf("                   ��\n" );
	printf( "��          ���ư����� [R]Ű          ��\n" );
	printf( "��                                    ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );

	while( !( m_select=='r' ) )
	{
		m_select = getch();
		if( m_select == 'r' )
		{
			//printf( "\a" );
			MainScreen();
		}
	}
};

void Credit()
{
	char m_select = -1;

	system( "cls" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��        ");
	ColorChange( "P U S H      P U S H", NULL, 15 );
	printf( "        ��\n" );
	printf( "��             By KSY CYJ             ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );
	printf( "��                                    ��\n" );
	printf( "��            �� ũ���� ��            ��\n" );
	printf( "��                                    ��\n" );
	printf( "��           �̷��� �ѹ���            ��\n" );
	printf( "��         �غ��� �;����ϴ�.         ��\n" );
	printf( "��               �����               ��\n" );
	printf( "��                                    ��\n" );
	printf( "��          ���ư����� [R]Ű          ��\n" );
	printf( "��                                    ��\n" );
	printf( "�̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢̢�\n" );

	while( !( m_select=='r' ) )
	{
		m_select = getch();
		if( m_select == 'r' )
		{
			//printf( "\a" );
			MainScreen();
		}
	}
}
