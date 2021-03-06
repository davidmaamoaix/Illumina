.. highlight:: illumina

Functions
=========

Functions in Illumina is just like functions from most programming languages. After being defined, it can be invoked with a list of parameters (possibly empty), and will return an value (unless the return type is :code:`void`).

Function definitions cannot be nested, and must be defined at the outmost scope (directly inside the file) or inside a class definition. The basic syntax of a function is::

    func funcName :: ReturnType (param :: ParamType):
        functionBody;

* :code:`funcName`: the name of the function
* :code:`ReturnType`: the return type of the function
* :code:`param`: the name of the parameter
* :code:`ParamType`: the type of the parameter
* :code:`functionBody`: a code block containing the body of the function

The parameter list is delimited with commas :code:`,`; each parameter declaration has a similar format with variable declaration. Note that unlike some languages, a default value cannot be assigned to a parameter; overloading should be used instead.