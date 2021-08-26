#include <stdio.h>

int main()
{
  double grade1, grade2, grade3, grade4;
  double weight1 = 2, weight2 = 3, weight3 = 4, weight4 = 1;

  scanf("%lf %lf %lf %lf", &grade1, &grade2, &grade3, &grade4);

  double grade_sum = (grade1 * weight1) + (grade2 * weight2) + (grade3 * weight3) + (grade4 * weight4);
  double weight_sum = weight1 + weight2 + weight3 + weight4;

  double average = grade_sum / weight_sum;

  printf("Media: %.1lf\n", average);

  if (average >= 7.0)
  {
    printf("Aluno aprovado.\n");
  }
  else if(average < 5.0)
  {
    printf("Aluno reprovado.\n");
  }
  else if(average >= 5.0 && average <= 6.9)
  {
    printf("Aluno em exame.\n");

    double exam_note = 0;
    scanf("%lf", &exam_note);
    printf("Nota do exame: %.1lf\n", exam_note);

    double final_average = (average + exam_note) / 2;

    if(final_average >=5.0)
    {
      printf("Aluno aprovado.\n");
    }
    else
    {
      printf("Aluno reprovado.\n");
    }
  
    printf("Media final: %.1lf\n", final_average);
  }

  return 0;
}
