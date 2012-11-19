/*
 ============================================================================
 Name        : Prewitt.c
 Author      : djbelyak
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bitmap.h"
#include <errno.h>
#include <sys/stat.h>

extern int errno;

int main(int argc, char* argv[])
{
	/*
	 * TODO Загрузка BMP изображения
	 */
	//Задаем путь к учителю
	const char* inName= "../Images/Dzhigurda.bmp";
	//Дескриптор файла учителя
	FILE* inImage;
	//Читаем из файла с обработкой ошибок
	if ((inImage = fopen(inName,"rb")) == NULL)
	{
		printf("Ошибка открытия файла #%d\n", errno);
		if (errno == 2)
			printf ("Укажи правильный путь к Духовному Фаллосу!");
	    return EXIT_FAILURE;
	}

	printf ("Рзамер интегера %d\n", sizeof(long));


	BITMAPFILEHEADER inFileHeader;
	fread (&inFileHeader,sizeof(BITMAPFILEHEADER),1,inImage);

	BITMAPINFOHEADER inInfoHeader;
	fread (&inInfoHeader,sizeof(BITMAPINFOHEADER),1,inImage);
	printf ("Ширина изображения %ld", inInfoHeader.biCompression);


	//Закрытие файла с учителем
	fclose(inImage);
	//TODO Коррекция гаммы до монохромного изображения

	//TODO Применение маски Прюитт

	//TODO Сохранение нового изображения
	return EXIT_SUCCESS;

}
