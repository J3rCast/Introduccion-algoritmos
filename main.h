% Mujeres %
es_mujer(beatriz).
es_mujer(angelina).
es_mujer(carmen).
es_mujer(magdalena).
es_mujer(yadira).
es_mujer(mayerly).
es_mujer(ximena).
es_mujer(alejandra).
es_mujer(angelica).
es_mujer(paula).
es_mujer(angela).

% Hombres %
es_hombre(marcos).
es_hombre(hernan).
es_hombre(felix).
es_hombre(carlos).
es_hombre(angel).
es_hombre(sergio).
es_hombre(jerson).
es_hombre(richard).
es_hombre(alan).
es_hombre(pepe).

% Parentescos %
es_progenitor(marcos, carmen).
es_progenitor(marcos, magdalena).
es_progenitor(marcos, carlos).
es_progenitor(hernan, angel).
es_progenitor(hernan, mayerly).
es_progenitor(hernan, yadira).
es_progenitor(felix, ximena).
es_progenitor(magdalena, alejandra).
es_progenitor(carlos, sergio).
es_progenitor(carlos, jerson).
es_progenitor(carlos, angelica).
es_progenitor(mayerly, paula).
es_progenitor(angel, angela).
es_progenitor(pepe, richard).
es_progenitor(alejandra, alan).

% Reglas de madres %
es_madre(beatriz, Y):-es_progenitor(marcos, Y).
es_madre(angelina, Y):-es_progenitor(hernan, Y).
es_madre(carmen, Y):-es_progenitor(felix, Y).
es_madre(yadira, Y):-es_progenitor(carlos, Y).
es_madre(ximena, Y):-es_progenitor(pepe, Y).
es_madre(X, Y):-es_mujer(X),es_progenitor(X, Y).

% Regla de padres %
es_padre(X, Y):-es_hombre(X),es_progenitor(X, Y).

% Regla de hijos %
es_hijo(Y, X):-es_hombre(Y),es_madre(X, Y);es_padre(X, Y).

% Regla de hijas %
es_hija(Y, X):-es_mujer(Y),es_madre(X, Y);es_padre(X, Y).

% Regla de esposos %
es_esposo(X, Y):-es_madre(Y, Z),es_padre(X, Z).
es_esposa(X, Y):-es_padre(Y, Z),es_madre(X, Z).

% Regla de abuelos %
es_abuelo(X, Y):-es_hombre(X),(es_hijo(Y, Z);es_hija(Y, Z)),(es_hijo(Z, X);es_hija(Z, X)).
es_abuela(X, Y):-es_mujer(X),(es_hijo(Y, Z);es_hija(Y, Z)),(es_hijo(Z, X);es_hija(Z, X)).

% Regla de nietos %
es_nieto(X, Y):-es_hombre(X),(es_abuelo(Y, X);es_abuela(Y, X)).
es_nieta(X, Y):-es_mujer(X),(es_abuelo(Y, X);es_abuela(Y, X)).
