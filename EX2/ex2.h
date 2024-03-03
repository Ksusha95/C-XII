#define AMERICAN_MODE 1
#define METRIC_MODE 0

static int mode = 0; //статическая с внутр.связыванием в ОВ файл
static double distance = 0; //статическая с внутр.связыванием в ОВ файл
static double fuelCons = 0; //статическая с внутр.связыванием в ОВ файл

void set_mode(int);
		
void get_info(void);
		
void show_info(void);

