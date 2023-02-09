import typing as ty
from lava.magma.core.process.ports.ports import OutPort, InPort
from lava.magma.core.learning.learning_rule import LoihiLearningRule
from lava.magma.core.process.variable import Var


class LearningNeuronProcess:
    """
    Base class for plastic neuron processes.

    This base class holds all necessary Vars, Ports and functionality for
    online learning in fixed and floating point simulations.

    Parameters
    ==========

    shape: tuple:
        Shape of the neuron process.

    learning_rule: LoihiLearningRule
        Learning rule which determines the parameters for online learning.

    """
    def __init__(self,
                 shape: ty.Tuple[int, ...],
                 learning_rule: LoihiLearningRule,
                 *args,
                 **kwargs):

        kwargs['shape'] = shape
        kwargs['learning_rule'] = learning_rule

        # Learning Ports
        self.a_third_factor_in = InPort(shape=(shape[0],))

        # Port for backprop action potentials
        self.s_out_bap = OutPort(shape=(shape[0],))

        # Port for arbitrary trace using graded spikes
        self.s_out_y1 = OutPort(shape=(shape[0],))

        # Port for arbitrary trace using graded spikes
        self.s_out_y2 = OutPort(shape=(shape[0],))

        # Port for arbitrary trace using graded spikes
        self.s_out_y3 = OutPort(shape=(shape[0],))

        # Learning related states
        self.y1 = Var(shape=shape, init=0)
        self.y2 = Var(shape=shape, init=0)
        self.y3 = Var(shape=shape, init=0)

        self.y1_tau = Var(shape=(1, ), init=learning_rule.y1_tau)
        self.y1_impulse = Var(shape=(1, ), init=learning_rule.y1_impulse)
        self.y2_tau = Var(shape=(1, ), init=learning_rule.y2_tau)
        self.y2_impulse = Var(shape=(1, ), init=learning_rule.y2_impulse)
        self.y3_tau = Var(shape=(1, ), init=learning_rule.y3_tau)
        self.y3_impulse = Var(shape=(1, ), init=learning_rule.y3_impulse)

        super().__init__(*args, **kwargs)
