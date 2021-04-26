/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar      = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int colorprompt = 1;      /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int centered    = 0;      /* -c option; centers dmenu on screen */
static int min_width   = 500;    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font Bandit:style=Medium,Regular:size=8",
	"Font Awesome 5 Free:style=Regular:size=8",
	"Font Awesome 5 Brands:style=Regular:size=8",
	"octicons:style=Medium:size=8"
};
static const char *prompt   = NULL;      /* -p  option; prompt to the left of input field */
static const char *symbol_1 = "";
static const char *symbol_2 = "";
static const char *colors[SchemeLast][2] = {
	            /*      fg         bg     */
	[SchemeNorm] = { "#bbbbbb", "#1e1e1e" },
	[SchemeSel]  = { "#eeeeee", "#005f87" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
