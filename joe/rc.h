/*
 *	*rc file parser
 *	Copyright
 *		(C) 1992 Joseph H. Allen; 
 *
 *	This file is part of JOE (Joe's Own Editor)
 */

/* int procrc(CAP *cap, char *name);  Process an rc file
   Returns 0 for success
          -1 for file not found
           1 for syntax error (errors written to stderr)
*/
int procrc(CAP *cap, char *name);

/* Validate rc file: return -1 if it's bad (call this after rc file has been loaded) */
int validate_rc();

/* Get a file in the JOERC directory. If file is NULL get the directory itself.
   First checks $XDG_CONFIG_HOME/joe, then ~/.config/joe, and finally ~/.joe.
   Returns NULL on failure. 
   Returns a dynamically allocated string (path to the file) on success.
*/
char *get_joerc_file(const char *file);

char *get_joerc(const char *run);
