/* user and group to drop privileges to */
static const char *user  = "blair";
static const char *group = "blair";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#fcfcfb",   /* after initialization */
	[INPUT] =  "#8cb7c5",   /* during input */
	[FAILED] = "#fd9692",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 0;

/* time to cancel lock with mouse movement in seconds */
static const int timetocancel = 5;

/* default message */
static const char * default_message = "=================   This is eighty characters  =================================\n\n\t\t\t-Blair";
