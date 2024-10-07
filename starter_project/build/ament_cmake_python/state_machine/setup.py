from setuptools import find_packages
from setuptools import setup

setup(
    name='state_machine',
    version='2025.0.0',
    packages=find_packages(
        include=('state_machine', 'state_machine.*')),
)
