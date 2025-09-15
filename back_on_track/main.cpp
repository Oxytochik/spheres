#include "iostream"
#include "circle.h"
#include "point.h"
#include "point_3d.h"
#include "sphere.h"

enum Position { Without, OneTouch, Intersect, Wihtin_and_Intersect, Within, Eq };

Position Check(Circle circle1, Circle circle2) {

    int d = circle1.distanceCent(circle2);
    int R = circle1.get_rad();
    int r = circle2.get_rad();
    if (circle1.isEq(circle2)) return Eq;
    if (d > R + r) return Without;
    if (d == R + r) return OneTouch;
    if ((R - r < d) && (d < R + r)) return Intersect;
    if (d == R - r) return Wihtin_and_Intersect;
    if (d < R - r) return Within;
}

Position Check(sphere sphere1, sphere sphere2) {

    int d = sphere1.distanceCent(sphere2);
    int R = sphere1.get_rad();
    int r = sphere2.get_rad();
    if (sphere1.isEq(sphere2)) return Eq;
    if (d > R + r) return Without;
    if (d == R + r) return OneTouch;
    if ((R - r < d) && (d < R + r)) return Intersect;
    if (d == R - r) return Wihtin_and_Intersect;
    if (d < R - r) return Within;
}

int main() {
    Point first;
    Point second(3, 4);
    int dist = first.distance(second);
    std::cout << "Distance Point: " << (dist) << std::endl;

    point_3d first_3d;
    point_3d second_3d(0, 0, 1);
    int dist_3d = first_3d.distance(second_3d);
    std::cout << "Distance Point: " << (dist_3d) << std::endl;

    Circle distCircle1(0, 0, 1);
    Circle distCircle2(0, 0, 1);

    std::cout << "Eq: " << Check(distCircle1, distCircle2) << std::endl;

    distCircle1.set_CordsCentre(100, 0);
    distCircle2.set_CordsCentre(-1, 0);
    std::cout << "Without: " << Check(distCircle1, distCircle2) << std::endl;

    distCircle1.set_CordsCentre(0, 0);
    distCircle2.set_CordsCentre(2, 0);
    std::cout << "OneTouch: " << Check(distCircle1, distCircle2) << std::endl;

    distCircle1.set_CordsCentre(1, 0);
    distCircle2.set_CordsCentre(0, 0);
    std::cout << "Intersect: " << Check(distCircle1, distCircle2) << std::endl;

    distCircle1.set_CordsCentre(0, 0);
    distCircle2.set_CordsCentre(1, 0);
    distCircle1.set_rad(2);
    distCircle2.set_rad(1);
    std::cout << "Wihtin_and_Intersect: " << Check(distCircle1, distCircle2) << std::endl;

    distCircle1.set_CordsCentre(0, 0);
    distCircle2.set_CordsCentre(0, 0);
    distCircle1.set_rad(2);
    distCircle2.set_rad(1);
    std::cout << "Wihtin: " << Check(distCircle1, distCircle2) << std::endl;

    std::cout << "Right answer: 51501234 " << std::endl;


    sphere distSphere1(0, 0, 0, 1);
    sphere distSphere2(0, 0, 0, 1);

    std::cout << "Eq: " << Check(distSphere1, distSphere2) << std::endl;

    distSphere1.set_CordsCentre(100, 0, 0);
    distSphere2.set_CordsCentre(-1, 0, 0);
    std::cout << "Without: " << Check(distSphere1, distSphere2) << std::endl;

    distSphere1.set_CordsCentre(0, 0, 0);
    distSphere2.set_CordsCentre(2, 0, 0);
    std::cout << "OneTouch: " << Check(distSphere1, distSphere2) << std::endl;

    distSphere1.set_CordsCentre(1, 0, 0);
    distSphere2.set_CordsCentre(0, 0, 0);
    std::cout << "Intersect: " << Check(distSphere1, distSphere2) << std::endl;

    distSphere1.set_CordsCentre(0, 0, 0);
    distSphere2.set_CordsCentre(1, 0, 0);
    distSphere1.set_rad(2);
    distSphere2.set_rad(1);
    std::cout << "Wihtin_and_Intersect: " << Check(distSphere1, distSphere2) << std::endl;

    distSphere1.set_CordsCentre(0, 0, 0);
    distSphere2.set_CordsCentre(0, 0, 0);
    distSphere1.set_rad(2);
    distSphere2.set_rad(1);
    std::cout << "Wihtin: " << Check(distSphere1, distSphere2) << std::endl;
}