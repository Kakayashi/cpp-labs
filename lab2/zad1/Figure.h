#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED
class Figure
{
    private:
        float area;
        float circuit;
    public:
        Figure();
        virtual ~Figure();
         float getArea();
         void setArea(float area1);
         void setCircuit(float circuit);
         virtual void calculateArea()=0;
         virtual void calculateCircuit()=0;
         void show();
 };
 #endif // FIGURE_H_INCLUDED
