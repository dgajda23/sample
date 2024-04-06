//---------------------------------
//              Earth
//---------------------------------
// Draw Earth's orbit
float earthOrbitRadius = (REAL_EARTH_DIST / BASE_ORBITAL_DIVIDEND) + STARTING_ORBIT_RADIUS;
glPushMatrix( );
    glDisable( GL_LIGHTING );
    glColor3f( 1.f, 1.f, 1.f );
    DrawCircleOutline(earthOrbitRadius);
    glEnable( GL_LIGHTING );
glPopMatrix( );  
// Draw and animate Earth
glPushMatrix( );
    // Calculate the position on the circle
    period = (1 / (pow(earthOrbitRadius, 3/2))) * 300;
    angle = -2 * F_PI * Time * period;
    x = earthOrbitRadius * cosf(angle);
    z = earthOrbitRadius * sinf(angle);
    glTranslatef(x, 0.0f, z);
    glCallList( EarthDL );
glPopMatrix( );
