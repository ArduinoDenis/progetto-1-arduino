# Arduino - Far Lampeggiare un LED

Questo è un semplice sketch per Arduino che fa lampeggiare un LED collegato al pin 13.

## Requisiti

Per eseguire questo script, è necessario avere:
- Una scheda Arduino compatibile
- Un LED
- Una resistenza (se necessario per limitare la corrente)
- Cavi di collegamento

## Collegamento

Collega il LED al pin 13 della scheda Arduino. Assicurati di utilizzare una resistenza (generalmente da 220 ohm) in serie al LED per limitare la corrente e proteggere il LED.

## Istruzioni

1. Carica lo sketch nell'IDE di Arduino.
2. Collega la scheda Arduino al computer tramite cavo USB.
3. Seleziona il tipo di scheda e la porta corretti nell'IDE di Arduino.
4. Carica lo sketch sulla scheda Arduino.
5. Osserva il LED lampeggiare ad intervalli regolari di un secondo.

## Codice

```cpp
#define LED 13 // LED COLLEGATO AL PIN 13

void setup() {
    pinMode(LED, OUTPUT); // IMPOSTA IL PIN COME OUTPUT
}

void loop() {
    digitalWrite(LED, HIGH); // ACCENDE IL LED
    delay(1000);             // ASPETTA UN SECONDO
    digitalWrite(LED, LOW);  // SPEGNE IL LED
    delay(1000);             // ASPETTA UN SECONDO
}
```

## Licenza

Questo script è rilasciato sotto la [Licenza MIT](LICENSE).
```

Puoi anche aggiungere ulteriori dettagli come istruzioni più dettagliate, una descrizione più ampia del progetto o eventuali modifiche necessarie per adattare lo script alle specifiche hardware o ai requisiti del progetto. Assicurati di includere sempre una licenza appropriata per il tuo progetto.
