#include <stdio.h>
#include <string.h>


struct student		//구조체 선언
{
	char name[30];
	int student_id;
	char major[30];
	int age;
	char address[30];
};

int main(void)
{
	struct student stu[1000] = { {"kim",123456,"mathmatics",24,"명진관"},{"lee",121212,"computer",21,"신공학관"},{"park",124512,"statics",23,"명진관"},{"kim",151515,"english",28,"혜화관"}};		//초기 구조체 배열의 원소들
	char find[30];		//이름 검색을 위한 변수 선언
	char del[30];		//이름 삭제를 위한 변수 선언
	int size = 4;		//현재 구조체 배열의 사이즈를 저장
	
	while (1)		//계속하여 반복할 수 있도록 무한루프 생성
	{
		int num;
		printf("이용할 기능의 번호를 입력하세요:\n1. 이름 검색   2. 신규 입력   3. 삭제   4. 종료\n");		//4가지의 기능을 이용할 수 있도록 설정
		scanf_s("%d", &num);		//이용할 기능 입력받음
		if (num == 1)		//학생 검색 기능
		{
			printf("이름 검색\n검색할 이름을 입력하세요\n");
			scanf_s("%s",&find,sizeof(find));		//문자열 변수에 이름 저장
			int i;
			for (i = 0; i < size; ++i)		//배열의 사이즈 만큼 검색
			{
				if (strcmp(stu[i].name, find) == 0)		//구조체 배열 내에서 이름에 해당하는 문자열과 검색한 값이 같다면
				{
					printf("이름: %s\n",stu[i].name);
					printf("학번: %d\n", stu[i].student_id);
					printf("학과: %s\n", stu[i].major);
					printf("나이: %d\n", stu[i].age);
					printf("주소: %s\n",stu[i].address);		//학생의 정보를 모두 출력
				}
			}
		}
		else if (num == 2) {		//학생 추가 기능
			printf("추가할 이름 입력:");
			scanf_s("%s", & stu[size].name,sizeof(stu[size].name));
			printf("학번 입력:");
			scanf_s("%d", & stu[size].student_id);
			printf("학과 입력:");
			scanf_s("%s", & stu[size].major,sizeof(stu[size].major));
			printf("나이 입력:");
			scanf_s("%d", & stu[size].age);
			printf("주소 입력:");
			scanf_s("%s", & stu[size].address,sizeof(stu[size].address));		//새로 등록할 학생의 이름을 배열의 크기값을 index로 갖는 배열에 추가함
			size++;			//배열의 사이즈를 1 증가
		}
		else if (num == 3)		//학생 삭제 기능
		{
			printf("삭제할 이름을 입력하세요\n");
			scanf_s("%s", &del, sizeof(del));
			int i;
			for (i = 0; i < size; ++i)
			{
				if ((strcmp(stu[i].name, del)) == 0)		//검색과 마찬가지로 검색한 이름을 배열에서 탐색함
					stu[i] = stu[1000];		//검색한 학생의 정보를 index가 1000인 배열에 저장함으로써 없앨 수 있음(구조체 배열의 크기를 1000으로 설정했기 때문에 999까지만 유효함)
			}
		}
		else if (num == 4)		//4번을 입력하면 프로그램 종료
			break;
		else
			printf("1~4의 번호를 입력하세요.\n");		//다른 번호를 입력할 경우 경고메세지 출력
	}
	printf("프로그램을 종료합니다.");
}
			
