#include <stdio.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale(LC_ALL, "Ukr");
	int y, m, d;
	double b, r, s;
	printf("Введіть рік прийняття: ");
	scanf_s("%d", &y);
	if (y < 2021) {
		printf("\nНевірний рік прийняття\n");
		return 0;
	}
	if (y > 2022) {
		printf("\nНевірний рік прийняття\n");
		return 0;
	}
	if (y == 2021) {
		printf("\nРік прийняття: 2021\n");
	}
	if (y == 2022) {
		printf("\nРік прийняття: 2022\n");
	}
	printf("\nВведіть місяць прийняття: ");
	scanf_s("%d", &m);
	if (m < 1) {
		printf("\nНевірний місяць прийняття\n");
		return 0;
	}
	if (m > 12) {
		printf("\nНевірний місяць прийняття\n");
		return 0;
	}
	if (m == 1) {
		printf("\nМісяць прийняття: січень\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 31) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\nДата прийняття: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 2) {
		printf("\nМісяць прийняття: лютий\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 28) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 28) {
			printf("\nДата прийняття: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 3) {
		printf("\nМісяць прийняття: березень\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 31) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\nДата прийняття: %d/0%d/%d", d, m ,y);
			printf("\n");
		}
	}
	if (m == 4) {
		printf("\nМісяць прийняття: квітень\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 30) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 30) {
			printf("\nДата прийняття: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 5) {
		printf("\nМісяць прийняття: травень\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 31) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\nДата прийняття: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 6) {
		printf("\nМісяць прийняття: червень\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 30) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 30) {
			printf("\nДата прийняття: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 7) {
		printf("\nМісяць прийняття: липень\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 31) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\nДата прийняття: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 8) {
		printf("\nМісяць прийняття: серпень\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 31) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\nДата прийняття: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 9) {
		printf("\nМісяць прийняття: вересень\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 30) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 30) {
			printf("\nДата прийняття: %d/0%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 10) {
		printf("\nМісяць прийняття: жовтень\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 31) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\nДата прийняття: %d/%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 11) {
		printf("\nМісяць прийняття: листопад\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 30) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 30) {
			printf("\nДата прийняття: %d/%d/%d", d, m, y);
			printf("\n");
		}
	}
	if (m == 12) {
		printf("\nМісяць прийняття: грудень\n");
		printf("\nВведіть день прийняття: ");
		scanf_s("%d", &d);
		if (d < 1) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d > 31) {
			printf("\nНевірний день прийняття\n");
			return 0;
		}
		if (d >= 1 && d <= 31) {
			printf("\nДата прийняття: %d/%d/%d", d, m, y);
			printf("\n");
		}
	}
	printf("\nВведіть ставку в $: ");
	scanf_s("%lf", &r);
	if (r < 300) {
		printf("\nНевірна ставка\n");
		return 0;
	}
	if (r > 900) {
		printf("\nНевірна ставка\n");
		return 0;
	}
	if (r >= 300 && r <= 900) {
		printf("\nCтавка: $%lg", r);
		printf("\n");
	}
	printf("\nВведіть базову заробітню плату в $: ");
	scanf_s("%lf", &b);
	if (b < 300) {
		printf("\nНевірна базова заробітня плата\n");
		return 0;
	}
	if (b > 900) {
		printf("\nНевірна базова заробітня плата\n");
		return 0;
	}
	if (b >= 300 && b <= 900) {
		printf("\nБазова заробітня плата: $%lg", b);
		printf("\n");
	}
	s = b * r;
	printf("\nСередня заробітня плата: $%lg", s);
	printf("\n");
	const char* A = "Засранчук Микола Іванович";
	const char* B = "Рофлан Дмитро Ігорович";
	const char* C = "Незабудько Олексій Іванович";
	const char* D = "Петров Денис Олександрович";
	const char* E = "Жмишенко Валерій Альбертович";
	const char* F = "Застільний Іван Олегович";
	const char* G = "Малюк Сергій Олексійович";
	const char* H = "Лузан Олексій Володимирович";
	const char* I = "Незабарний Матвій Назарович";
	const char* J = "Юсральний Євген Васильович";
	const char* K = "Солодкий Ігор Денисович";
	const char* L = "Безгрішнийий Григорій Дем'янович";
	const char* M = "Набережний Анатолій Іванович";
	const char* N = "Незрілий Іван Андросович";
	const char* O = "Лісовий Микола Андрійович";
	const char* P = "Оперативний План Романович";
	const char* R = "Арарар Роман Назарович";
	const char* S = "Недристаний Олексій Павлович";
	const char* T = "Задристаний Олексій Павлович";
	const char* U = "Обломов Іван Петрович";
	const char* V = "Закльопкін Руслан Іванович";
	const char* W = "Асранов Олег Іванович";
	const char* X = "Кокосовий Банан Ананасович";
	const char* Y = "Паперний Олексій Олександрович";
	if (y == 2021) {
		if (m == 1) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 90000 && s <= 270000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(A);
				printf("\n");
				printf(B);
			}
		}
		if (m > 2 && m < 8) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	if (y == 2021) {
		if (m == 1) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 270000 && s <= 540000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(C);
				printf("\n");
				printf(D);
			}
		}
		if (m > 2 && m < 8) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	if (y == 2021) {
		if (m == 1) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 540000 && s <= 810000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(E);
				printf("\n");
				printf(F);
			}
		}
		if (m > 2 && m < 8) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	if (y == 2021) {
		if (m == 8) {
			if (s >= 90000 && s <= 270000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(G);
				printf("\n");
				printf(H);
			}
		}
		if (m > 8 && m < 12) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	if (y == 2021) {
		if (m == 8) {
			if (s >= 270000 && s <= 540000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(I);
				printf("\n");
				printf(J);
			}
		}
		if (m > 8 && m < 12) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	if (y == 2021) {
		if (m == 8) {
			if (s >= 540000 && s <= 810000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(K);
				printf("\n");
				printf(L);
			}
		}
		if (m > 8 && m < 12) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 1) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 90000 && s <= 270000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(M);
				printf("\n");
				printf(N);
			}
		}
		if (m > 2 && m < 8) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 1) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 270000 && s <= 540000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(O);
				printf("\n");
				printf(P);
			}
		}
		if (m > 2 && m < 8) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 1) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
		if (m == 2) {
			if (s >= 540000 && s <= 810000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(R);
				printf("\n");
				printf(S);
			}
		}
		if (m > 2 && m < 8) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 8) {
			if (s >= 90000 && s <= 270000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(T);
				printf("\n");
				printf(U);
			}
		}
		if (m > 8 && m < 12) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 8) {
			if (s >= 270000 && s <= 540000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(V);
				printf("\n");
				printf(W);
			}
		}
		if (m > 8 && m < 12) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	if (y == 2022) {
		if (m == 8) {
			if (s >= 540000 && s <= 810000) {
				printf("\nПІБ необхідних співробітників:\n");
				printf(X);
				printf("\n");
				printf(Y);
			}
		}
		if (m > 8 && m < 12) {
			printf("\nНеобхідних співробітників немає\n");
			return 0;
		}
	}
	printf("\n");
}
