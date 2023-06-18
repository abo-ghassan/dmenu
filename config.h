                                                                
                                                                
/* `7MM"""Yb. 							    */                                                      
/*   MM    `Yb. 						    */                                                    
/*   MM     `Mb `7MMpMMMb.pMMMb.   .gP"Ya  `7MMpMMMb.  `7MM  `7MM   */  
/*   MM      MM   MM    MM    MM  ,M'   Yb   MM    MM    MM    MM   */  
/*   MM     ,MP   MM    MM    MM  8M""""""   MM    MM    MM    MM   */  
/*   MM    ,dP'   MM    MM    MM  YM.    ,   MM    MM    MM    MM   */  
/* .JMMmmmdP'   .JMML  JMML  JMML. `Mbmmd' .JMML  JMML.  `Mbod"YML. */

/* By Sa'eed AL-Habal */
/* Github: https://github.com/abo-ghassan */

/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                 /* minimum width when centered */

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Monospace:size=11",
	"NotoColorEmoji:pixelsize=20"
};

static const char *colors[SchemeLast][2] = {
	/* 		 fg         bg       */
	[SchemeNorm] = { "#bfbfbf", "#222222" },
	[SchemeSel]  = { "#bfbfbf", "#660066" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
