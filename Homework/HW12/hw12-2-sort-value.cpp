/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    Test case:
        Student A
        Name : 
            Yorn
        Score : 
            21.42

        Student B
        Name : 
            Omen
        Score : 
            56.00

        Student C
        Name : 
            Alice
        Score : 
            80.75

        Student D
        Name : 
            Violet
        Score : 
            67.76

    Output:
        Alice Violet Omen Yorn
        80.75 67.76 56.00 21.42

    Test case:
        Student A
        Name : 
            Payna
        Score : 
            77.77
            
        Student B
        Name : 
            Zanis
        Score : 
            88.88

        Student C
        Name : 
            Lubu
        Score : 
            66.66

        Student D
        Name : 
            Krixi
        Score : 
            99.99

    Output:
        Krixi Zanis Payna Lubu
        99.99 88.88 77.77 66.66

*/
#include <stdio.h>

struct Student {
	    char  Name[20] ;
	    float Score ;
	} ;

void bubbleSort( struct Student arr[], int n ) {
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        for ( int j = 0 ; j < n - i - 1 ; j++ ) {
            if ( arr[ j ].Score < arr[ j + 1 ].Score ) {
                // Swap arr[j] and arr[j+1]
                struct Student temp = arr[ j ] ;
                arr[ j ] = arr[ j + 1 ] ;
                arr[ j + 1 ] = temp ;
            } //end if
        } //end for
    } //end for
} //end function


int main() {
    struct Student a[4] ;
    for ( int i = 0 ; i < 4 ; i++ ) {
        printf( "Student %c :\n", ( char ) ( i + 65 ) ) ;
        printf( "Name :\n") ;
        scanf( "%s", a[i].Name ) ;
        printf( "Score :\n" ) ;
        scanf( "%f", &a[i].Score ) ;
    } //end for
    bubbleSort( a, 4 ) ;
    for ( int i = 0; i < 4 ; i++ ) {
        printf( " %s ", a[i].Name) ;
    } //end for
    printf( "\n" ) ;
    for ( int i = 0; i < 4 ; i++ ) {
        printf( " %.2f ", a[i].Score ) ;
    } //end for
    printf( "\n" ) ;
    return 0 ;
} //end main  