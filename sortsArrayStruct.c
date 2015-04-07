// sorts an array of structures
// order the days by tempeature
#include <stdio.h>
#include <string.h>

int main()
{
	struct weather {
		char day[10];
		float temperature;
	};

	struct weather week[7] = {
		{ "Sunday", 72.5 },
		{ "Monday", 68.4 },
		{ "Tuesday", 75.0 },
		{ "Wednesday", 73.8 },
		{ "Thursday", 65.1 },
		{ "Friday", 72.8 },
		{"Saturday", 75.2 }
	};

	struct weather temporary;
	int x, outer, inner;

    // display the unsorted array
	puts("Unsorted Temperature Array:");
	for(x = 0; x < 7; x++){
		printf("%10s %.1f degrees\n", week[x].day, week[x].temperature);
	}

	// sort the array
	for(outer = 0; outer < 7; outer++){
        for(inner = outer+1; inner < 7; inner++){
            if(week[outer].temperature > week[inner].temperature){
                temporary = week[inner];
                week[inner] =  week[outer];
                week[outer] = temporary;
            }
        }
	}

	// display the sorted array
	puts("-------------------------\n");
	puts("Sorted Temperature Array:");
	for(x = 0; x < 7; x++){
		printf("%10s %.1f degrees\n", week[x].day, week[x].temperature);
	}



	return(0);
}
