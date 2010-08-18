#ifndef __UTILS_H__
#define __UTILS_H__

extern char * skipword( char * s2 ) {

    while( isgraph(*s2) ) { s2++; }
    return s2;

}

extern char * skipspace( char * s2 ) {

    while( *s2 == ' ' ) { s2++; }
    return s2;

}

void _gunzip( char * file ) {

    char cmd[32];
    sprintf( cmd , "gunzip -f %s" , file );
    system( cmd );

}

#endif
